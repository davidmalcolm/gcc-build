DEPDIR=$(PWD)/dep-prefix

# GCC's gcc/install.texi describes the deps for building.
# For building with graphite, we need isl.

# "integer set library"
ISL_VERSION=0.15

GMP_VERSION=4.3.2

MPC_VERSION=1.0.3

MPFR_VERSION=3.1.4

all: systemdeps deps gcc

clean:
	rm -rf \
	  s-isl s-gmp s-mpc s-mpfr \
	  isl-$(ISL_VERSION) \
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
	gmp-$(GMP_VERSION).tar.bz2 \
	mpc-$(MPC_VERSION).tar.gz \
	mpfr-$(MPFR_VERSION).tar.bz2

isl-$(ISL_VERSION).tar.bz2:
	wget ftp://gcc.gnu.org/pub/gcc/infrastructure/isl-$(ISL_VERSION).tar.bz2

gmp-$(GMP_VERSION).tar.bz2:
	wget ftp://gcc.gnu.org/pub/gcc/infrastructure/gmp-$(GMP_VERSION).tar.bz2

mpc-$(MPC_VERSION).tar.gz:
	wget ftp://gcc.gnu.org/pub/gcc/infrastructure/mpc-$(MPC_VERSION).tar.gz

mpfr-$(MPFR_VERSION).tar.bz2:
	wget ftp://gcc.gnu.org/pub/gcc/infrastructure/mpfr-$(MPFR_VERSION).tar.bz2

gcc:
	git clone git://gcc.gnu.org/git/gcc.git

############################################################################
# Targets to help with benchmarking GCC builds
#
# These require PATH_TO_TEST_GCC to point to an install dir
# e.g.:
#   make benchmark-linux-3.9.1 \
#      PATH_TO_TEST_GCC=~/coding/gcc-python/gcc-svn-4.6/install/bin
#
############################################################################

############################################################################
# linux-3.9.1:
############################################################################

# 69MB
linux-3.9.1.tar.xz:
	wget https://www.kernel.org/pub/linux/kernel/v3.x/linux-3.9.1.tar.xz

linux-3.9.1: linux-3.9.1.tar.xz
	tar -Jxf linux-3.9.1.tar.xz
