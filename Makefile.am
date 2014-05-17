DISTCHECK_CONFIGURE_FLAGS=--enable-gtk-doc
SUBDIRS = gst-libs gst pkgconfig m4 common

DIST_SUBDIRS = gst gst-libs pkgconfig m4 common

include $(top_srcdir)/common/win32.mak

EXTRA_DIST = autogen.sh

DISTCLEANFILES = _stdint.h

ACLOCAL_AMFLAGS = -I m4 -I common/m4

include $(top_srcdir)/common/release.mak
include $(top_srcdir)/common/po.mak

check-valgrind:
	cd tests/check && make check-valgrind

include $(top_srcdir)/common/coverage/lcov.mak
check: check-exports


