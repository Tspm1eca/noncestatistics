AC_PREREQ([2.69])
AC_INIT([noncestatistics], m4_esyscmd([git rev-list --count HEAD | tr -d '\n']), [tihmstar@gmail.com])

# Prepare for automake.
AM_INIT_AUTOMAKE([foreign])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIRS([m4])

AC_CANONICAL_HOST

# Check for operating system
AC_MSG_CHECKING([whether we need platform-specific build settings])
case $host_os in
  darwin* )
        CXXFLAGS+=" -stdlib=libc++"
        ;;
esac

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
CXXFLAGS+=" -std=c++11"
CFLAGS+=" -std=c11"
AC_PROG_INSTALL
AC_PROG_LIBTOOL

# Versioning.
AC_DEFINE([VERSION_COMMIT_COUNT], "m4_esyscmd([git rev-list --count HEAD | tr -d '\n'])", [Git commit count])
AC_DEFINE([VERSION_COMMIT_SHA], "m4_esyscmd([git rev-parse HEAD | tr -d '\n'])", [Git commit sha])
AC_SUBST([VERSION_COMMIT_COUNT], ["m4_esyscmd([git rev-list --count HEAD | tr -d '\n'])"])
AC_SUBST([VERSION_COMMIT_SHA], ["m4_esyscmd([git rev-parse HEAD | tr -d '\n'])"])

# Checks for libraries.
LIBIMOBILEDEVICE_REQUIRES_STR="libimobiledevice-1.0 >= 1.2.1"
LIBIRECOVERY_REQUIRES_STR="libirecovery >= 0.2.0"
LIBUSBMUXD_REQUIRES_STR="libusbmuxd >= 1.0"

PKG_CHECK_MODULES(libplist, libplist >= 2.0.0)
PKG_CHECK_MODULES(libimobiledevice, $LIBIMOBILEDEVICE_REQUIRES_STR)
PKG_CHECK_MODULES(libimobiledevice, $LIBIRECOVERY_REQUIRES_STR)
PKG_CHECK_MODULES(libusbmuxd, $LIBUSBMUXD_REQUIRES_STR)

# Checks for header files.
AC_CHECK_HEADERS([getopt.h stdio.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_INT32_T
AC_TYPE_INT64_T
AC_TYPE_SIZE_T
AC_TYPE_UINT32_T
AC_TYPE_UINT64_T
AC_TYPE_UINT8_T

# Checks for library functions.
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_CHECK_FUNCS([memset mkdir pow strchr strdup strstr])

AC_CONFIG_FILES([Makefile noncestatistics/Makefile])
AC_OUTPUT
