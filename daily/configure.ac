#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([dailyd], [0.1], [arsee@sina.com])
AC_CONFIG_SRCDIR([main.cpp])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_PROG_CPP

# Checks for libraries.
AC_CHECK_LIB([pthread],[pthread_rwlock_init])
AC_PROG_RANLIB
AC_CHECK_LIB([odb], [odb::session])
AC_CHECK_LIB([odb-mysql], [odb::mysql::database])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_C_INLINE
AC_TYPE_SIZE_T

# Checks for library functions.
AC_CHECK_FUNCS([select])

AC_OUTPUT(Makefile odb/Makefile)
