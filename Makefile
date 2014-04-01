DEPDIR=$(PWD)/dep-prefix

# GCC's gcc/install.texi describes the deps for building.
# For building with graphite, we need cloog and isl.
# In particular, install.texi has:
#    If you want to install CLooG separately it needs to be built against
#    ISL 0.12.2 by using the @option{--with-isl=system} to direct CLooG to pick
#    up an already installed ISL.  Using the ISL library as bundled with CLooG
#    is not supported."
# Hence we build an ISL 0.12.2 and then build cloog against it

# "integer set library"
ISL_VERSION=0.12.2

# "Chunky Loop Generator"
# (this bundles isl-0.11.1, but we want a "system" ISL as noted above)
CLOOG_VERSION=0.18.0

GMP_VERSION=4.3.2

MPC_VERSION=0.8.1

MPFR_VERSION=2.4.2

all: systemdeps deps gcc

clean:
	rm -rf \
	  s-isl s-cloog s-gmp s-mpc s-mpfr \
	  isl-$(ISL_VERSION) \
	  cloog-$(CLOOG_VERSION) \
	  gmp-$(GMP_VERSION) \
	  mpc-$(MPC_VERSION) \
	  mpfr-$(MPFR_VERSION) \
	  $(DEPDIR)

J=-j$(cat /proc/cpuinfo | grep processor | wc -l)

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
	s-isl \
	s-cloog \
	s-gmp \
	s-mpc \
	s-mpfr

s-isl: isl-$(ISL_VERSION).tar.bz2 s-gmp
	tar -jxf $<
	(cd isl-$(ISL_VERSION) \
	  && ./configure --prefix=$(DEPDIR) --with-gmp-prefix=$(DEPDIR) \
	  && make $J \
	  && make install \
	) && touch $@

s-cloog: cloog-$(CLOOG_VERSION).tar.gz s-gmp s-isl
	tar -zxf $<
	(cd cloog-$(CLOOG_VERSION) \
	  && ./configure --prefix=$(DEPDIR) --with-gmp-prefix=$(DEPDIR) -with-isl-prefix=$(DEPDIR) \
	  && make $J \
	  && make install \
	) && touch $@

s-gmp: gmp-$(GMP_VERSION).tar.bz2
	tar -jxf $<
	(cd gmp-$(GMP_VERSION) \
	  && ./configure --prefix=$(DEPDIR) \
	  && make $J \
	  && make install \
	) && touch $@

s-mpc: mpc-$(MPC_VERSION).tar.gz s-gmp s-mpfr
	tar -zxf $<
	(cd mpc-$(MPC_VERSION) \
	  && ./configure --prefix=$(DEPDIR) --with-gmp=$(DEPDIR) \
	  && make $J \
	  && make install \
	) && touch $@

s-mpfr: mpfr-$(MPFR_VERSION).tar.bz2 s-gmp
	tar -jxf $<
	(cd mpfr-$(MPFR_VERSION) \
	  && ./configure --prefix=$(DEPDIR) --with-gmp=$(DEPDIR) \
	  && make $J \
	  && make install \
	) && touch $@

dep-tarballs:  \
	isl-$(ISL_VERSION).tar.gz \
	cloog-$(CLOOG_VERSION).tar.gz \
	gmp-$(GMP_VERSION).tar.bz2 \
	mpc-$(MPC_VERSION).tar.gz \
	mpfr-$(MPFR_VERSION).tar.bz2

isl-$(ISL_VERSION).tar.bz2:
	wget ftp://gcc.gnu.org/pub/gcc/infrastructure/isl-$(ISL_VERSION).tar.bz2

cloog-$(CLOOG_VERSION).tar.gz:
	wget ftp://gcc.gnu.org/pub/gcc/infrastructure/cloog-$(CLOOG_VERSION).tar.gz

gmp-$(GMP_VERSION).tar.bz2:
	wget ftp://gcc.gnu.org/pub/gcc/infrastructure/gmp-$(GMP_VERSION).tar.bz2

mpc-$(MPC_VERSION).tar.gz:
	wget ftp://gcc.gnu.org/pub/gcc/infrastructure/mpc-$(MPC_VERSION).tar.gz

mpfr-$(MPFR_VERSION).tar.bz2:
	wget ftp://gcc.gnu.org/pub/gcc/infrastructure/mpfr-$(MPFR_VERSION).tar.bz2

gcc:
	git clone git://gcc.gnu.org/git/gcc.git