DEPDIR=$(PWD)/dep-prefix

 # this bundles isl-0.11.1:
CLOOG_VERSION=0.18.0

GMP_VERSION=4.3.2

MPC_VERSION=0.8.1

MPFR_VERSION=2.4.2

all: systemdeps deps git-merge-changelog gcc

systemdeps:
	yum install -y \
	  dejagnu \
	  texinfo \
	  glibc-devel.i686 \
	  screen

# We need glibc-devel.i686 on x86_64, otherwise the build fails inside
#   x86_64-unknown-linux-gnu/32/libgcc
# with:
#   In file included from /usr/include/features.h:385:0,
#                    from /usr/include/stdio.h:28,
#                    from ../../../../src/libgcc/../gcc/tsystem.h:87,
#                    from ../../../../src/libgcc/libgcov.c:27:
#   /usr/include/gnu/stubs.h:7:27: fatal error: gnu/stubs-32.h: No such file or directory
#    # include <gnu/stubs-32.h>
#                              ^

deps: \
	s-cloog \
	s-gmp \
	s-mpc \
	s-mpfr

s-cloog: cloog-$(CLOOG_VERSION).tar.gz s-gmp
	tar -zxf $<
	(cd cloog-$(CLOOG_VERSION) \
	  && ./configure --prefix=$(DEPDIR) --with-gmp-prefix=$(DEPDIR) \
	  && make \
	  && make install \
	) && touch $@

s-gmp: gmp-$(GMP_VERSION).tar.bz2
	tar -jxf $<
	(cd gmp-$(GMP_VERSION) \
	  && ./configure --prefix=$(DEPDIR) \
	  && make \
	  && make install \
	) && touch $@

s-mpc: mpc-$(MPC_VERSION).tar.gz s-gmp s-mpfr
	tar -zxf $<
	(cd mpc-$(MPC_VERSION) \
	  && ./configure --prefix=$(DEPDIR) --with-gmp=$(DEPDIR) \
	  && make \
	  && make install \
	) && touch $@

s-mpfr: mpfr-$(MPFR_VERSION).tar.bz2 s-gmp
	tar -jxf $<
	(cd mpfr-$(MPFR_VERSION) \
	  && ./configure --prefix=$(DEPDIR) --with-gmp=$(DEPDIR) \
	  && make \
	  && make install \
	) && touch $@

dep-tarballs:  \
	cloog-$(CLOOG_VERSION).tar.gz \
	gmp-$(GMP_VERSION).tar.bz2 \
	mpc-$(MPC_VERSION).tar.gz \
	mpfr-$(MPFR_VERSION).tar.bz2 

cloog-$(CLOOG_VERSION).tar.gz:
	wget ftp://gcc.gnu.org/pub/gcc/infrastructure/cloog-$(CLOOG_VERSION).tar.gz

gmp-$(GMP_VERSION).tar.bz2:
	wget ftp://gcc.gnu.org/pub/gcc/infrastructure/gmp-$(GMP_VERSION).tar.bz2

mpc-$(MPC_VERSION).tar.gz:
	wget ftp://gcc.gnu.org/pub/gcc/infrastructure/mpc-$(MPC_VERSION).tar.gz

mpfr-$(MPFR_VERSION).tar.bz2:
	wget ftp://gcc.gnu.org/pub/gcc/infrastructure/mpfr-$(MPFR_VERSION).tar.bz2


git-merge-changelog: /usr/local/bin/git-merge-changelog
/usr/local/bin/git-merge-changelog:
	git clone git://git.savannah.gnu.org/gnulib.git
	(cd gnulib \
	  && ./gnulib-tool \
	       --create-testdir \
	       --dir=/tmp/testdir123 git-merge-changelog)
	(cd /tmp/testdir123 \
	  && ./configure && make && make install)
	git config --global merge.merge-changelog.name "GNU-style ChangeLog merge driver"
	git config --global merge.merge-changelog.driver "/usr/local/bin/git-merge-changelog %O %A %B"

#echo "ChangeLog   merge=merge-changelog" >> ~/gcc-git/.git/info/attributes

gcc:
	git clone git://gcc.gnu.org/git/gcc.git