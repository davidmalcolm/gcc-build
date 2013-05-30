DEPDIR=$(PWD)/dep-prefix

 # this bundles isl-0.11.1:
CLOOG_VERSION=0.18.0

GMP_VERSION=4.3.2

MPC_VERSION=0.8.1

MPFR_VERSION=2.4.2

all: systemdeps deps

systemdeps:
	yum install -y \
	  dejagnu
	  texinfo

deps: \
	s-cloog \
	s-gmp \
	s-mpc \
	s-mpfr

s-cloog: cloog-$(CLOOG_VERSION).tar.gz
	tar -zxf $<
	(cd cloog-$(CLOOG_VERSION) \
	  && ./configure --prefix=$(DEPDIR) \
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

s-mpc: mpc-$(MPC_VERSION).tar.gz
	tar -zxf $<
	(cd mpc-$(MPC_VERSION) \
	  && ./configure --prefix=$(DEPDIR) \
	  && make \
	  && make install \
	) && touch $@

s-mpfr: mpfr-$(MPFR_VERSION).tar.bz2
	tar -jxf $<
	(cd mpfr-$(MPFR_VERSION) \
	  && ./configure --prefix=$(DEPDIR) \
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


git-merge-changelog:·/usr/local/bin/git-merge-changelog
/usr/local/bin/git-merge-changelog:
	git·clone·git://git.savannah.gnu.org/gnulib.git
	(cd·gnulib \
	  &&·./gnulib-tool·\
	       --create-testdir \
	       --dir=/tmp/testdir123·git-merge-changelog)
	(cd·/tmp/testdir123·\
	  &&·./configure·&&·make·&&·make·install)
