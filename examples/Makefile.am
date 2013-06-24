##############################################################################
#
# Polylib - Polygon Management Library
#
# Copyright (c) 2010-2011 VCAD System Research Program, RIKEN. 
# All rights reserved.
# 
# Copyright (c) 2012-2013 Advanced Institute for Computational Science, RIKEN.
# All rights reserved.
#
##############################################################################

noinst_PROGRAMS = test test2 test_mpi test_mpi2 test_mpi3

DISTCLEANFILES=*~
CLEANFILES=data/*.log


test_SOURCES  = \
  test.cxx \
  blade1.stl \
  blade2.stl \
  blade3.stl \
  car.stl \
  car.stla \
  polylib_config-multi.tpp \
  polylib_config.tpp \
  polylib_config2.tpp \
  README \
  sphere.stl \
  tower.stl
test_CXXFLAGS = -I$(top_builddir)/include -lstdc++ @TP_CFLAGS@ 

test2_SOURCES  = test2.cxx
test2_CXXFLAGS = -I$(top_builddir)/include -lstdc++ @TP_CFLAGS@ 

test_mpi_SOURCES  = test_mpi.cxx
test_mpi_CXXFLAGS = -I$(top_builddir)/include -lstdc++ @TP_CFLAGS@ @MPICH_CFLAGS@

test_mpi2_SOURCES  = test_mpi2.cxx
test_mpi2_CXXFLAGS = -I$(top_builddir)/include -lstdc++ @TP_CFLAGS@ @MPICH_CFLAGS@

test_mpi3_SOURCES  = \
  test_mpi3.cxx \
  CarGroup.cxx \
  MyGroupFactory.cxx \
  CarGroup.h \
  MyGroupFactory.h
test_mpi3_CXXFLAGS = -I$(top_builddir)/include -lstdc++ @TP_CFLAGS@ @MPICH_CFLAGS@

test_LDADD = \
    -L$(top_builddir)/src -lPOLY \
    @MPICH_LDFLAGS@ \
    @MPICH_LIBS@ \
    @TP_LDFLAGS@ \
    @TP_LIBS@

test2_LDADD = \
    -L$(top_builddir)/src -lPOLY \
    @MPICH_LDFLAGS@ \
    @MPICH_LIBS@ \
    @TP_LDFLAGS@ \
    @TP_LIBS@

test_mpi_LDADD = \
    -L$(top_builddir)/src -lMPIPOLY \
    @MPICH_LDFLAGS@ \
    @MPICH_LIBS@ \
    @TP_LDFLAGS@ \
    @TP_LIBS@

test_mpi2_LDADD = \
    -L$(top_builddir)/src -lMPIPOLY \
    @MPICH_LDFLAGS@ \
    @MPICH_LIBS@ \
    @TP_LDFLAGS@ \
    @TP_LIBS@

test_mpi3_LDADD = \
    -L$(top_builddir)/src -lMPIPOLY \
    @MPICH_LDFLAGS@ \
    @MPICH_LIBS@ \
    @TP_LDFLAGS@ \
    @TP_LIBS@

dist_noinst_DATA=

.PHONY:$(dist_noinst_DATA)

