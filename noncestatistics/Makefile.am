AM_CXXFLAGS = $(libplist_CFLAGS) $(libimobiledevice_CFLAGS) $(libirecovery_CFLAGS) $(libusbmuxd_CFLAGS)
AM_LDFLAGS = $(libplist_LIBS) $(libimobiledevice_LIBS) $(libirecovery_LIBS) $(libusbmuxd_LIBS)

bin_PROGRAMS= noncestatistics
noncestatistics_CXXFLAGS = $(AM_CXXFLAGS)
noncestatistics_CFLAGS = $(AM_CXXFLAGS)
noncestatistics_LDADD = $(AM_LDFLAGS)

if WIN32
noncestatistics_LDFLAGS = -all-static -static-libgcc -static-libstdc++ $(AM_LDFLAGS)
endif

noncestatistics_SOURCES = common.c dfu.c idevicerestore.c normal.c recovery.c stats.cpp main.cpp
