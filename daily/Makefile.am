noinst_PROGRAMS=dailyd
dailyd_SOURCES=main.cpp job_logics.cpp 
dailyd_LDFLAGES=-g
AM_CPPFLAGS=-I../../ -std=c++11 
dailyd_LDADD= $(top_srcdir)/lib/librqh.a $(top_srcdir)/lib/libmynet.a \
	$(top_srcdir)/odb/libmodels.a -lodb -lodb-mysql

SUBDIRS=odb


