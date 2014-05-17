plugin_LTLIBRARIES = libgstskbmpegtsdemux.la

# sources used to compile this plug-in
libgstskbmpegtsdemux_la_SOURCES = \
	mpegtspacketizer.c \
	mpegtsbase.c    \
	mpegtsparse.c \
	tsdemux.c       \
	gsttsdemux.c \
	pesparse.c

# compiler and linker flags used to compile this plugin, set in configure.ac
libgstskbmpegtsdemux_la_CFLAGS = \
	-I$(top_srcdir)/gst-libs -I$(top_builddir)/gst-libs \
	$(GST_PLUGINS_BASE_CFLAGS) \
	$(GST_BASE_CFLAGS) \
	$(GST_CFLAGS)
libgstskbmpegtsdemux_la_LIBADD = \
	$(top_builddir)/gst-libs/gst/skbmpegts/libgstskbmpegts-$(GST_API_VERSION).la \
	$(GST_PLUGINS_BASE_LIBS) \
	-lgsttag-$(GST_API_VERSION) \
	-lgstpbutils-@GST_API_VERSION@ \
	$(GST_BASE_LIBS) $(GST_LIBS)
libgstskbmpegtsdemux_la_LDFLAGS = $(GST_PLUGIN_LDFLAGS)
libgstskbmpegtsdemux_la_LIBTOOLFLAGS = $(GST_PLUGIN_LIBTOOLFLAGS)

# headers we need but don't want installed
noinst_HEADERS = \
	gstmpegdefs.h \
	gstmpegdesc.h \
	mpegtsbase.h \
	mpegtspacketizer.h \
	mpegtsparse.h \
	tsdemux.h \
	pesparse.h
