/* inc/fontforge-config.h.  Generated from fontforge-config.h.in by configure.  */
/* inc/fontforge-config.h.in.  Generated from configure.ac by autoheader.  */

#ifndef _FF_CONFIG_H
#define _FF_CONFIG_H 1

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Build the Collab Code */
/* #undef BUILD_COLLAB */

/* Define if enabling feature 'capslock-for-alt'. */
/* #undef FONTFORGE_CONFIG_CAPSLOCK_FOR_ALT */

/* Define if enabling feature 'gb12345'. */
/* #undef FONTFORGE_CONFIG_GB12345 */

/* Define if enabling feature 'debug-raw-points'. */
/* #undef FONTFORGE_CONFIG_SHOW_RAW_POINTS */

/* Define if enabling feature 'tile-path'. */
/* #undef FONTFORGE_CONFIG_TILEPATH */

/* Define if using 'double' precision. */
#define FONTFORGE_CONFIG_USE_DOUBLE 1

/* Define if enabling feature 'debug'. */
/* #undef FONTFORGE_DEBUG */

/* "git hash that source are built from" */
#define FONTFORGE_GIT_VERSION "7df63eff7f9536ade6f6b9ca0525198f5c44f091"

/* ExeLibFontForge Major Version */
#define FONTFORGE_LIBFFE_VERSION_MAJOR 2

/* ExeLibFontForge Minor Version */
#define FONTFORGE_LIBFFE_VERSION_MINOR 0

/* LibFontForge Major Version */
#define FONTFORGE_LIBFF_VERSION_MAJOR 2

/* LibFontForge Minor Version */
#define FONTFORGE_LIBFF_VERSION_MINOR 0

/* "Epoch time that configure was run at" */
#define FONTFORGE_MODTIME "1487338408L"

/* "Epoch time that configure was run at (no quotes)" */
#define FONTFORGE_MODTIME_RAW 1487338408L

/* "A user friendly date that that configure was run at: For example 01:48 GMT
   6-Sep-2012" */
#define FONTFORGE_MODTIME_STR "13:33 GMT 17-Feb-2017"

/* "A user friendly date that that configure was run at: For example 01:48 GMT
   6-Sep-2012 (no quotes)" */
#define FONTFORGE_MODTIME_STR_RAW 13:33 GMT 17-Feb-2017

/* Define if enabling feature 'theme-2012'. */
/* #undef FONTFORGE_THEME_TANGO */

/* "YYYYMMDD as number when configure was run" */
#define FONTFORGE_VERSIONDATE "20170217"

/* "YYYYMMDD as number when configure was run (no quotes)" */
#define FONTFORGE_VERSIONDATE_RAW 20170217

/* FontForge Major Version */
#define FONTFORGE_VERSION_MAJOR 2

/* FontForge Minor Version */
#define FONTFORGE_VERSION_MINOR 0

/* Define if using the freetype debugger (requires freetype source code). */
/* #undef FREETYPE_HAS_DEBUGGER */

/* Define to 1 if you have the `alarm' function. */
#define HAVE_ALARM 1

/* Define to 1 if you have the `argz_add' function. */
/* #undef HAVE_ARGZ_ADD */

/* Define to 1 if you have the `argz_append' function. */
/* #undef HAVE_ARGZ_APPEND */

/* Define to 1 if you have the `argz_count' function. */
/* #undef HAVE_ARGZ_COUNT */

/* Define to 1 if you have the `argz_create_sep' function. */
/* #undef HAVE_ARGZ_CREATE_SEP */

/* Define to 1 if you have the <argz.h> header file. */
/* #undef HAVE_ARGZ_H */

/* Define to 1 if you have the `argz_insert' function. */
/* #undef HAVE_ARGZ_INSERT */

/* Define to 1 if you have the `argz_next' function. */
/* #undef HAVE_ARGZ_NEXT */

/* Define to 1 if you have the `argz_stringify' function. */
/* #undef HAVE_ARGZ_STRINGIFY */

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the `atexit' function. */
#define HAVE_ATEXIT 1

/* Define to 1 if you have the `closedir' function. */
#define HAVE_CLOSEDIR 1

/* Define to 1 if you have the declaration of `cygwin_conv_path', and to 0 if
   you don't. */
/* #undef HAVE_DECL_CYGWIN_CONV_PATH */

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define if you have the GNU dld library. */
/* #undef HAVE_DLD */

/* Define to 1 if you have the <dld.h> header file. */
/* #undef HAVE_DLD_H */

/* Define to 1 if you have the `dlerror' function. */
#define HAVE_DLERROR 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <dl.h> header file. */
/* #undef HAVE_DL_H */

/* Define to 1 if you have the `dup2' function. */
#define HAVE_DUP2 1

/* Define if you have the _dyld_func_lookup function. */
/* #undef HAVE_DYLD */

/* Define to 1 if you have the `endpwent' function. */
#define HAVE_ENDPWENT 1

/* Define to 1 if the system has the type `error_t'. */
/* #undef HAVE_ERROR_T */

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `floor' function. */
#define HAVE_FLOOR 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD 1

/* Define to 1 if you have the `gethostbyname' function. */
#define HAVE_GETHOSTBYNAME 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Have GUI */
/* #undef HAVE_GUI */

/* Define to 1 if you have the <iconv.h> header file. */
/* #undef HAVE_ICONV_H */

/* Define to 1 if you have the <ieeefp.h> header file. */
/* #undef HAVE_IEEEFP_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <langinfo.h> header file. */
#define HAVE_LANGINFO_H 1

/* Define if you have the libdl library or equivalent. */
#define HAVE_LIBDL 1

/* Define if libdlloader will be built on this platform */
#define HAVE_LIBDLLOADER 1

/* Define to 1 if you have the <libintl.h> header file. */
#define HAVE_LIBINTL_H 1

/* Define to 1 if you have the `ltdl' library (-lltdl). */
#define HAVE_LIBLTDL 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the `localeconv' function. */
#define HAVE_LOCALECONV 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if the system has the type 'long long int'. */
#define HAVE_LONG_LONG_INT 1

/* Define this if a modern libltdl is already installed */
#define HAVE_LTDL 1

/* Define to 1 if you have the <mach-o/dyld.h> header file. */
#define HAVE_MACH_O_DYLD_H 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the `mkdir' function. */
#define HAVE_MKDIR 1

/* Define to 1 if you have a working `mmap' system call. */
#define HAVE_MMAP 1

/* Define to 1 if you have the `munmap' function. */
#define HAVE_MUNMAP 1

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the `nl_langinfo' function. */
#define HAVE_NL_LANGINFO 1

/* Define to 1 if you have the `opendir' function. */
#define HAVE_OPENDIR 1

/* Define to 1 if you have the `pow' function. */
#define HAVE_POW 1

/* Define if libtool can extract symbol lists from object files. */
#define HAVE_PRELOADED_SYMBOLS 1

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Have PTHREAD_PRIO_INHERIT. */
#define HAVE_PTHREAD_PRIO_INHERIT 1

/* Define to 1 if you have the `putenv' function. */
#define HAVE_PUTENV 1

/* Define to 1 if you have the `readdir' function. */
#define HAVE_READDIR 1

/* Define to 1 if you have the `rint' function. */
#define HAVE_RINT 1

/* Define to 1 if you have the `rmdir' function. */
#define HAVE_RMDIR 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define if you have the shl_load function. */
/* #undef HAVE_SHL_LOAD */

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the `socket' function. */
#define HAVE_SOCKET 1

/* Define to 1 if you have the `sqrt' function. */
#define HAVE_SQRT 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strcoll' function and it is properly defined.
   */
#define HAVE_STRCOLL 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
#define HAVE_STRLCAT 1

/* Define to 1 if you have the `strlcpy' function. */
#define HAVE_STRLCPY 1

/* Define to 1 if you have the `strncasecmp' function. */
#define HAVE_STRNCASECMP 1

/* Define to 1 if you have the `strpbrk' function. */
#define HAVE_STRPBRK 1

/* Define to 1 if you have the `strrchr' function. */
#define HAVE_STRRCHR 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if you have the `strtoul' function. */
#define HAVE_STRTOUL 1

/* Define to 1 if you have the <sys/dl.h> header file. */
/* #undef HAVE_SYS_DL_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the `tzset' function. */
#define HAVE_TZSET 1

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has the type 'unsigned long long int'. */
#define HAVE_UNSIGNED_LONG_LONG_INT 1

/* Define to 1 if you have the `vfork' function. */
#define HAVE_VFORK 1

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* This value is set to 1 to indicate that the system argz facility works */
/* #undef HAVE_WORKING_ARGZ */

/* Define to 1 if `fork' works. */
#define HAVE_WORKING_FORK 1

/* Define to 1 if `vfork' works. */
#define HAVE_WORKING_VFORK 1

/* Define if the OS needs help to load dependent libraries for dlopen(). */
/* #undef LTDL_DLOPEN_DEPLIBS */

/* Define to the system default library search path. */
#define LT_DLSEARCH_PATH "/usr/local/lib:/lib:/usr/lib"

/* The archive extension */
#define LT_LIBEXT "a"

/* The archive prefix */
#define LT_LIBPREFIX "lib"

/* Define to the extension used for runtime loadable modules, say, ".so". */
#define LT_MODULE_EXT ".so"

/* Define to the name of the environment variable that determines the run-time
   module search path. */
#define LT_MODULE_PATH_VAR "DYLD_LIBRARY_PATH"

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Define to the shared library suffix, say, ".dylib". */
#define LT_SHARED_EXT ".dylib"

/* Define to the shared archive member specification, say "(shr.o)". */
/* #undef LT_SHARED_LIB_MEMBER */

/* Define if enabling feature 'maintainer-tools'. */
/* #undef MAINTAINER_TOOLS */

/* Define if dlsym() requires a leading underscore in symbol names. */
/* #undef NEED_USCORE */

/* Name of package */
#define PACKAGE ""fontforge""

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "fontforge-devel@lists.sourceforge.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME "fontforge"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "fontforge 2.0.20140101"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""fontforge""

/* Define to the home page for this package. */
#define PACKAGE_URL "https://github.com/fontforge/fontforge"

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.0.20140101"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "2.0.20140101"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to 1 if the X Window System is missing or not being used. */
#define X_DISPLAY_MISSING 1

/* Platform specific stuff */
/* #undef _BrokenBitmapImages */

/* Platform specific stuff */
#define _CursorsMustBe16x16 1

/* Define if using 'long long int'. */
#define _HAS_LONGLONG 1

/* Platform specific stuff */
#define _Keyboard 1

/* Libspiro returns true or false. */
/* #undef _LIBSPIRO_FUN */

/* Libuninameslist library has 3 new functions. */
/* #undef _LIBUNINAMESLIST_FUN */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Platform specific stuff */
/* #undef _ModKeysAutoRepeat */

/* Define if disabling feature 'link-test'. */
/* #undef _NO_FFLINKTEST */

/* Define if disabling feature 'native-scripting'. */
/* #undef _NO_FFSCRIPT */

/* Define if not using cairo. */
/* #undef _NO_LIBCAIRO */

/* Define if not using libjpeg. */
/* #undef _NO_LIBJPEG */

/* Define if not using libpng. */
/* #undef _NO_LIBPNG */

/* Define if not using libreadline. */
/* #undef _NO_LIBREADLINE */

/* Define if not using libspiro. */
#define _NO_LIBSPIRO 1

/* Define if not using libtiff. */
/* #undef _NO_LIBTIFF */

/* Define if not using giflib or libungif.) */
/* #undef _NO_LIBUNGIF */

/* Define if not using libunicodenames. */
#define _NO_LIBUNICODENAMES 1

/* Define if not using libuninameslist. */
#define _NO_LIBUNINAMESLIST 1

/* Define if not using libxml. */
/* #undef _NO_LIBXML */

/* Define if not using libzmq. */
#define _NO_LIBZMQ 1

/* Define if not using mmap. */
/* #undef _NO_MMAP */

/* Define if not using Python. */
#define _NO_PYTHON 1

/* Define if not using snprintf. */
/* #undef _NO_SNPRINTF */

/* Define if not using tzset. */
/* #undef _NO_TZSET */

/* Define if not using xinput. */
/* #undef _NO_XINPUT */

/* Define if not using xkb. */
/* #undef _NO_XKB */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT32_T */

/* Define for Solaris 2.5.1 so the uint8_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT8_T */

/* Platform specific stuff */
/* #undef __CygWin */

/* Platform specific stuff */
#define __Mac 1

/* Define so that glibc/gnulib argp.h does not typedef error_t. */
#define __error_t_defined 1

/* Define to a type to use for 'error_t' if it is not otherwise available. */
#define error_t int

/* Define to the type of a signed integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int16_t */

/* Define to the type of a signed integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int32_t */

/* Define to the type of a signed integer type of width exactly 8 bits if such
   a type exists and the standard includes do not define it. */
/* #undef int8_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to the type of an unsigned integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint16_t */

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint32_t */

/* Define to the type of an unsigned integer type of width exactly 8 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint8_t */

/* Define as `fork' if `vfork' does not work. */
/* #undef vfork */

#endif
