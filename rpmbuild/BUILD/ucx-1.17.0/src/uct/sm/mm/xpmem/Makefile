# Makefile.in generated by automake 1.13.4 from Makefile.am.
# src/uct/sm/mm/xpmem/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994-2013 Free Software Foundation, Inc.

# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.



#
# Copyright (c) NVIDIA CORPORATION & AFFILIATES, 2001-2018. ALL RIGHTS RESERVED.
# Copyright (C) UChicago Argonne, LLC. 2019.  ALL RIGHTS RESERVED.
# See file LICENSE for terms.
#

#
# Copyright (c) NVIDIA CORPORATION & AFFILIATES, 2001-2019. ALL RIGHTS RESERVED.
#
# See file LICENSE for terms.
#

#
# Copyright (c) NVIDIA CORPORATION & AFFILIATES, 2021. ALL RIGHTS RESERVED.
# See file LICENSE for terms.
#



am__is_gnu_make = test -n '$(MAKEFILE_LIST)' && test -n '$(MAKELEVEL)'
am__make_running_with_option = \
  case $${target_option-} in \
      ?) ;; \
      *) echo "am__make_running_with_option: internal error: invalid" \
              "target option '$${target_option-}' specified" >&2; \
         exit 1;; \
  esac; \
  has_opt=no; \
  sane_makeflags=$$MAKEFLAGS; \
  if $(am__is_gnu_make); then \
    sane_makeflags=$$MFLAGS; \
  else \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        bs=\\; \
        sane_makeflags=`printf '%s\n' "$$MAKEFLAGS" \
          | sed "s/$$bs$$bs[$$bs $$bs	]*//g"`;; \
    esac; \
  fi; \
  skip_next=no; \
  strip_trailopt () \
  { \
    flg=`printf '%s\n' "$$flg" | sed "s/$$1.*$$//"`; \
  }; \
  for flg in $$sane_makeflags; do \
    test $$skip_next = yes && { skip_next=no; continue; }; \
    case $$flg in \
      *=*|--*) continue;; \
        -*I) strip_trailopt 'I'; skip_next=yes;; \
      -*I?*) strip_trailopt 'I';; \
        -*O) strip_trailopt 'O'; skip_next=yes;; \
      -*O?*) strip_trailopt 'O';; \
        -*l) strip_trailopt 'l'; skip_next=yes;; \
      -*l?*) strip_trailopt 'l';; \
      -[dEDm]) skip_next=yes;; \
      -[JT]) skip_next=yes;; \
    esac; \
    case $$flg in \
      *$$target_option*) has_opt=yes; break;; \
    esac; \
  done; \
  test $$has_opt = yes
am__make_dryrun = (target_option=n; $(am__make_running_with_option))
am__make_keepgoing = (target_option=k; $(am__make_running_with_option))
pkgdatadir = $(datadir)/ucx
pkgincludedir = $(includedir)/ucx
pkglibdir = $(libdir)/ucx
pkglibexecdir = $(libexecdir)/ucx
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-unknown-linux-gnu
host_triplet = x86_64-unknown-linux-gnu
DIST_COMMON = $(top_srcdir)/config/module.am \
	$(top_srcdir)/config/module-pkg-config.am \
	$(srcdir)/Makefile.in $(srcdir)/Makefile.am \
	$(srcdir)/ucx-xpmem.pc.in $(top_srcdir)/depcomp
subdir = src/uct/sm/mm/xpmem
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/config/m4/gtest.m4 \
	$(top_srcdir)/config/m4/libtool.m4 \
	$(top_srcdir)/config/m4/ltoptions.m4 \
	$(top_srcdir)/config/m4/ltsugar.m4 \
	$(top_srcdir)/config/m4/ltversion.m4 \
	$(top_srcdir)/config/m4/lt~obsolete.m4 \
	$(top_srcdir)/config/m4/ax_prog_doxygen.m4 \
	$(top_srcdir)/config/m4/graphviz.m4 \
	$(top_srcdir)/config/m4/ucg.m4 \
	$(top_srcdir)/config/m4/compiler.m4 \
	$(top_srcdir)/config/m4/sysdep.m4 \
	$(top_srcdir)/config/m4/ucm.m4 $(top_srcdir)/config/m4/mpi.m4 \
	$(top_srcdir)/config/m4/fuse3.m4 $(top_srcdir)/config/m4/go.m4 \
	$(top_srcdir)/config/m4/java.m4 \
	$(top_srcdir)/config/m4/cuda.m4 \
	$(top_srcdir)/config/m4/rocm.m4 $(top_srcdir)/config/m4/ze.m4 \
	$(top_srcdir)/config/m4/gdrcopy.m4 \
	$(top_srcdir)/config/m4/mad.m4 $(top_srcdir)/config/m4/lcov.m4 \
	$(top_srcdir)/src/ucm/configure.m4 \
	$(top_srcdir)/src/ucm/cuda/configure.m4 \
	$(top_srcdir)/src/ucm/rocm/configure.m4 \
	$(top_srcdir)/src/ucm/ze/configure.m4 \
	$(top_srcdir)/src/ucs/configure.m4 \
	$(top_srcdir)/src/ucs/vfs/sock/configure.m4 \
	$(top_srcdir)/src/ucs/vfs/fuse/configure.m4 \
	$(top_srcdir)/src/uct/configure.m4 \
	$(top_srcdir)/src/uct/cuda/configure.m4 \
	$(top_srcdir)/src/uct/cuda/gdr_copy/configure.m4 \
	$(top_srcdir)/src/uct/ib/configure.m4 \
	$(top_srcdir)/src/uct/ib/rdmacm/configure.m4 \
	$(top_srcdir)/src/uct/rocm/configure.m4 \
	$(top_srcdir)/src/uct/sm/configure.m4 \
	$(top_srcdir)/src/uct/sm/scopy/configure.m4 \
	$(top_srcdir)/src/uct/sm/scopy/cma/configure.m4 \
	$(top_srcdir)/src/uct/sm/scopy/knem/configure.m4 \
	$(top_srcdir)/src/uct/sm/mm/configure.m4 \
	$(top_srcdir)/src/uct/sm/mm/xpmem/configure.m4 \
	$(top_srcdir)/src/uct/ugni/configure.m4 \
	$(top_srcdir)/src/uct/ze/configure.m4 \
	$(top_srcdir)/src/tools/perf/configure.m4 \
	$(top_srcdir)/src/tools/perf/lib/configure.m4 \
	$(top_srcdir)/src/tools/perf/cuda/configure.m4 \
	$(top_srcdir)/src/tools/perf/rocm/configure.m4 \
	$(top_srcdir)/src/tools/perf/ze/configure.m4 \
	$(top_srcdir)/src/tools/perf/mad/configure.m4 \
	$(top_srcdir)/test/gtest/configure.m4 \
	$(top_srcdir)/test/gtest/common/googletest/configure.m4 \
	$(top_srcdir)/test/gtest/ucm/test_dlopen/configure.m4 \
	$(top_srcdir)/test/gtest/ucm/test_dlopen/rpath-subdir/configure.m4 \
	$(top_srcdir)/test/gtest/ucs/test_module/configure.m4 \
	$(top_srcdir)/test/apps/iodemo/configure.m4 \
	$(top_srcdir)/test/apps/uct_info/configure.m4 \
	$(top_srcdir)/configure.ac
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES = ucx-xpmem.pc
CONFIG_CLEAN_VPATH_FILES =
am__vpath_adj_setup = srcdirstrip=`echo "$(srcdir)" | sed 's|.|.|g'`;
am__vpath_adj = case $$p in \
    $(srcdir)/*) f=`echo "$$p" | sed "s|^$$srcdirstrip/||"`;; \
    *) f=$$p;; \
  esac;
am__strip_dir = f=`echo $$p | sed -e 's|^.*/||'`;
am__install_max = 40
am__nobase_strip_setup = \
  srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*|]/\\\\&/g'`
am__nobase_strip = \
  for p in $$list; do echo "$$p"; done | sed -e "s|$$srcdirstrip/||"
am__nobase_list = $(am__nobase_strip_setup); \
  for p in $$list; do echo "$$p $$p"; done | \
  sed "s| $$srcdirstrip/| |;"' / .*\//!s/ .*/ ./; s,\( .*\)/[^/]*$$,\1,' | \
  $(AWK) 'BEGIN { files["."] = "" } { files[$$2] = files[$$2] " " $$1; \
    if (++n[$$2] == $(am__install_max)) \
      { print $$2, files[$$2]; n[$$2] = 0; files[$$2] = "" } } \
    END { for (dir in files) print dir, files[dir] }'
am__base_list = \
  sed '$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;s/\n/ /g' | \
  sed '$$!N;$$!N;$$!N;$$!N;s/\n/ /g'
am__uninstall_files_from_dir = { \
  test -z "$$files" \
    || { test ! -d "$$dir" && test ! -f "$$dir" && test ! -r "$$dir"; } \
    || { echo " ( cd '$$dir' && rm -f" $$files ")"; \
         $(am__cd) "$$dir" && rm -f $$files; }; \
  }
am__installdirs = "$(DESTDIR)$(moduledir)" "$(DESTDIR)$(pkgconfigdir)"
LTLIBRARIES = $(module_LTLIBRARIES)
#libuct_xpmem_la_DEPENDENCIES =  \
#	$(top_builddir)/src/ucs/libucs.la \
#	$(top_builddir)/src/uct/libuct.la
am__libuct_xpmem_la_SOURCES_DIST = mm_xpmem.c
#am_libuct_xpmem_la_OBJECTS =  \
#	libuct_xpmem_la-mm_xpmem.lo
libuct_xpmem_la_OBJECTS = $(am_libuct_xpmem_la_OBJECTS)
AM_V_lt = $(am__v_lt_$(V))
am__v_lt_ = $(am__v_lt_$(AM_DEFAULT_VERBOSITY))
am__v_lt_0 = --silent
am__v_lt_1 = 
libuct_xpmem_la_LINK = $(LIBTOOL) $(AM_V_lt) --tag=CC \
	$(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=link $(CCLD) \
	$(libuct_xpmem_la_CFLAGS) $(CFLAGS) $(libuct_xpmem_la_LDFLAGS) \
	$(LDFLAGS) -o $@
#am_libuct_xpmem_la_rpath = -rpath $(moduledir)
AM_V_P = $(am__v_P_$(V))
am__v_P_ = $(am__v_P_$(AM_DEFAULT_VERBOSITY))
am__v_P_0 = false
am__v_P_1 = :
AM_V_GEN = $(am__v_GEN_$(V))
am__v_GEN_ = $(am__v_GEN_$(AM_DEFAULT_VERBOSITY))
am__v_GEN_0 = @echo "  GEN     " $@;
am__v_GEN_1 = 
AM_V_at = $(am__v_at_$(V))
am__v_at_ = $(am__v_at_$(AM_DEFAULT_VERBOSITY))
am__v_at_0 = @
am__v_at_1 = 
DEFAULT_INCLUDES = -I. -I$(top_builddir)
depcomp = $(SHELL) $(top_srcdir)/depcomp
am__depfiles_maybe = depfiles
am__mv = mv -f
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
LTCOMPILE = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=compile $(CC) $(DEFS) \
	$(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) \
	$(AM_CFLAGS) $(CFLAGS)
AM_V_CC = $(am__v_CC_$(V))
am__v_CC_ = $(am__v_CC_$(AM_DEFAULT_VERBOSITY))
am__v_CC_0 = @echo "  CC      " $@;
am__v_CC_1 = 
CCLD = $(CC)
LINK = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) \
	$(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_V_CCLD = $(am__v_CCLD_$(V))
am__v_CCLD_ = $(am__v_CCLD_$(AM_DEFAULT_VERBOSITY))
am__v_CCLD_0 = @echo "  CCLD    " $@;
am__v_CCLD_1 = 
SOURCES = $(libuct_xpmem_la_SOURCES)
DIST_SOURCES = $(am__libuct_xpmem_la_SOURCES_DIST)
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
DATA = $(pkgconfig_DATA)
am__tagged_files = $(HEADERS) $(SOURCES) $(TAGS_FILES) $(LISP)
# Read a list of newline-separated strings from the standard input,
# and print each of them once, without duplicates.  Input order is
# *not* preserved.
am__uniquify_input = $(AWK) '\
  BEGIN { nonempty = 0; } \
  { items[$$0] = 1; nonempty = 1; } \
  END { if (nonempty) { for (i in items) print i; }; } \
'
# Make sure the list of sources is unique.  This is necessary because,
# e.g., the same source file might be shared among _SOURCES variables
# for different programs/libraries.
am__define_uniq_tagged_files = \
  list='$(am__tagged_files)'; \
  unique=`for i in $$list; do \
    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
  done | $(am__uniquify_input)`
ETAGS = etags
CTAGS = ctags
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} /root/rpmbuild/BUILD/ucx-1.17.0/missing aclocal-1.13
ALLOCA = 
AMTAR = $${TAR-tar}
AM_DEFAULT_VERBOSITY = 0
AR = ar
AUTOCONF = ${SHELL} /root/rpmbuild/BUILD/ucx-1.17.0/missing autoconf
AUTOHEADER = ${SHELL} /root/rpmbuild/BUILD/ucx-1.17.0/missing autoheader
AUTOMAKE = ${SHELL} /root/rpmbuild/BUILD/ucx-1.17.0/missing automake-1.13
AWK = gawk
BASE_CFLAGS = -O3 -g -Wall -Werror -funwind-tables -Wno-missing-field-initializers -Wno-unused-parameter -Wno-unused-label -Wno-long-long -Wno-endif-labels -Wno-sign-compare -Wno-multichar -Wno-deprecated-declarations -Winvalid-pch -Wno-pointer-sign -Werror-implicit-function-declaration -Wno-format-zero-length -Wnested-externs -Wshadow -Werror=declaration-after-statement
BASE_CPPFLAGS = -DCPU_FLAGS="" -I${abs_top_srcdir}/src -I${abs_top_builddir} -I${abs_top_builddir}/src
BASE_CXXFLAGS = -O3 -g -Wall -Werror -funwind-tables -Wno-missing-field-initializers -Wno-unused-parameter -Wno-unused-label -Wno-long-long -Wno-endif-labels -Wno-sign-compare -Wno-multichar -Wno-deprecated-declarations -Winvalid-pch
BFD_CFLAGS = 
BFD_CPPFLAGS = 
BFD_DEPS = 
BFD_LDFLAGS = 
BFD_LIBS = 
CC = gcc
CCAS = gcc
CCASDEPMODE = depmode=gcc3
CCASFLAGS = 
CCDEPMODE = depmode=gcc3
CFLAGS = 
CFLAGS_NO_DEPRECATED =  -Wno-deprecated-declarations
CFLAGS_PEDANTIC =  -pedantic
CPP = gcc -E
CPPFLAGS = 
CRAY_UGNI_CFLAGS = 
CRAY_UGNI_LIBS = 
CUDART_LIBS = 
CUDART_STATIC_LIBS = 
CUDA_CPPFLAGS = 
CUDA_LDFLAGS = 
CUDA_LIBS = 
CXX = g++
CXX11FLAGS = -std=gnu++11
CXXCPP = g++ -E
CXXDEPMODE = depmode=gcc3
CXXFLAGS = 
CYGPATH_W = echo
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DLLTOOL = false
DOXYGEN_PAPER_SIZE = 
DSYMUTIL = 
DUMPBIN = 
DX_BIBTEX = 
DX_CONFIG = docs/doxygen/ucxdox
DX_DOCDIR = docs/doxygen-doc
DX_DOT = 
DX_DOXYGEN = 
DX_DVIPS = 
DX_EGREP = 
DX_ENV =  SRCDIR='.' PROJECT='UCX' DOCDIR='docs/doxygen-doc' VERSION='1.17' HAVE_DOT='NO' GENERATE_MAN='NO' GENERATE_RTF='NO' GENERATE_XML='NO' GENERATE_HTMLHELP='NO' GENERATE_CHI='NO' GENERATE_HTML='NO' GENERATE_LATEX='NO'
DX_FLAG_chi = 0
DX_FLAG_chm = 0
DX_FLAG_doc = 0
DX_FLAG_dot = 0
DX_FLAG_html = 0
DX_FLAG_man = 0
DX_FLAG_pdf = 0
DX_FLAG_ps = 0
DX_FLAG_rtf = 0
DX_FLAG_xml = 0
DX_HHC = 
DX_LATEX = 
DX_MAKEINDEX = 
DX_PDFLATEX = 
DX_PERL = /usr/bin/perl
DX_PROJECT = UCX
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /usr/bin/grep -E
EXEEXT = 
EXTRA_VERSION = 
FGREP = /usr/bin/grep -F
FUSE3_CPPFLAGS = 
FUSE3_LDFLAGS = 
FUSE3_LIBS = 
GCOVBIN = 
GDR_COPY_CPPFLAGS = 
GDR_COPY_LDFLAGS = 
GDR_COPY_LIBS = 
GENHTMLBIN = 
GITBIN = yes
GO = 
GOBIN = 
GRAPHVIZ_DOT = yes
GREP = /usr/bin/grep
GTEST_CXXFLAGS =  -fno-tree-vectorize
HIP_CPPFLAGS = -D__HIP_PLATFORM_HCC__ -D__HIP_PLATFORM_AMD__ -I/opt/rocm/include/hip -I/opt/rocm/include
HIP_CXXFLAGS = 
HIP_LDFLAGS = -L/opt/rocm/hip/lib -L/opt/rocm/lib
HIP_LIBS = -lamdhip64
IBVERBS_CFLAGS = 
IBVERBS_CPPFLAGS = 
IBVERBS_DIR = 
IBVERBS_LDFLAGS = 
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
JAVABIN = yes
JDK = 
KNEM_CPPFLAGS = 
LCOVBIN = 
LD = /usr/bin/ld -m elf_x86_64
LDFLAGS = 
LDFLAGS_DYNAMIC_LIST_DATA = -Wl,-dynamic-list-data
LIBM = -lm
LIBOBJS = 
LIBS = -lpthread -lrt -lrt 
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIB_MLX5 = 
LIPO = 
LN_RS = ln -s --relative
LN_S = ln -s
LTLIBOBJS = 
MAD_CFLAGS = 
MAD_LDFLAGS = 
MAD_LIBS = 
MAINT = #
MAJOR_VERSION = 1
MAKEINFO = ${SHELL} /root/rpmbuild/BUILD/ucx-1.17.0/missing makeinfo
MANIFEST_TOOL = :
MINOR_VERSION = 17
MKDIR_P = /usr/bin/mkdir -p
MPICC = 
MPIRUN = 
MVN = 
MVNBIN = 
NM = /usr/bin/nm -B
NMEDIT = 
NVML_LIBS = 
OBJDUMP = objdump
OBJEXT = o
OPENMP_CFLAGS = -fopenmp
OTOOL = 
OTOOL64 = 
PACKAGE = ucx
PACKAGE_BUGREPORT = 
PACKAGE_NAME = ucx
PACKAGE_STRING = ucx 1.17
PACKAGE_TARNAME = ucx
PACKAGE_URL = 
PACKAGE_VERSION = 1.17
PATCH_VERSION = 0
PATH_SEPARATOR = :
PERF_LIB_CXXFLAGS =  -fno-exceptions -fno-rtti
PKG_CONFIG = /usr/bin/pkg-config
RANLIB = ranlib
RDMACM_CPPFLAGS = 
RDMACM_LDFLAGS = 
RDMACM_LIBS = 
READLINK = 
ROCM_CPPFLAGS = -I/opt/rocm/include/hsa -I/opt/rocm/include
ROCM_LDFLAGS = -L/opt/rocm/lib -L/opt/rocm/lib64 -L/opt/rocm/hsa/lib
ROCM_LIBS = -lhsa-runtime64 -lhsakmt
ROCM_ROOT = /opt/rocm
SCM_BRANCH = 
SCM_VERSION = 4ef9a09
SED = /usr/bin/sed
SET_MAKE = 
SHELL = /bin/sh
SHMEMCC = 
SOVERSION = 0:0:0
STRIP = strip
UCG_SUBDIR = 
UCM_MODULE_LDFLAGS = -Xlinker -z -Xlinker interpose -Xlinker --no-as-needed
UCX_PERFTEST_CC = gcc
VALGRIND_LIBPATH = 
VERSION = 1.17.0
XPMEM_CFLAGS = 
XPMEM_LIBS = 
ZE_CPPFLAGS = 
ZE_LDFLAGS = 
ZE_LIBS = 
abs_builddir = /root/rpmbuild/BUILD/ucx-1.17.0/src/uct/sm/mm/xpmem
abs_srcdir = /root/rpmbuild/BUILD/ucx-1.17.0/src/uct/sm/mm/xpmem
abs_top_builddir = /root/rpmbuild/BUILD/ucx-1.17.0
abs_top_srcdir = /root/rpmbuild/BUILD/ucx-1.17.0
ac_ct_AR = ar
ac_ct_CC = gcc
ac_ct_CXX = g++
ac_ct_DUMPBIN = 
am__include = include
am__leading_dot = .
am__quote = 
am__tar = tar --format=ustar -chf - "$$tardir"
am__untar = tar -xf -
bindir = ${exec_prefix}/bin
build = x86_64-unknown-linux-gnu
build_alias = 
build_bindings = 
build_cpu = x86_64
build_modules = :cma
build_os = linux-gnu
build_vendor = unknown
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
exec_prefix = ${prefix}
host = x86_64-unknown-linux-gnu
host_alias = 
host_cpu = x86_64
host_os = linux-gnu
host_vendor = unknown
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /root/rpmbuild/BUILD/ucx-1.17.0/install-sh
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localmoduledir = $(abs_top_builddir)/modules
localstatedir = ${prefix}/var
mandir = ${datarootdir}/man
mkdir_p = $(MKDIR_P)
moduledir = ${exec_prefix}/lib/ucx
modulesubdir = ucx
objdir = .libs
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /usr/ucx/1.17.0
program_transform_name = s,x,x,
psdir = ${docdir}
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
shrext = .so
srcdir = .
sysconfdir = ${prefix}/etc
target_alias = 
top_build_prefix = ../../../../../
top_builddir = ../../../../..
top_srcdir = ../../../../..
top_top_srcdir = .
ucx_config_dir = ${prefix}/etc/ucx
#module_LTLIBRARIES = libuct_xpmem.la
#libuct_xpmem_la_CFLAGS = $(BASE_CFLAGS) $(XPMEM_CFLAGS)
#libuct_xpmem_la_CPPFLAGS = $(BASE_CPPFLAGS)
#libuct_xpmem_la_LIBADD = $(top_builddir)/src/ucs/libucs.la \
#                           $(top_builddir)/src/uct/libuct.la

#libuct_xpmem_la_LDFLAGS = $(XPMEM_LIBS) -version-info $(SOVERSION)
#libuct_xpmem_la_SOURCES = mm_xpmem.c
#PKG_CONFIG_NAME = xpmem

# Automake silent rules
#AM_V_LN = $(AM_V_LN_$(V))
#AM_V_LN_ = $(AM_V_LN_$(AM_DEFAULT_VERBOSITY))
#AM_V_LN_0 = echo "  LN      "
#AM_V_LN_1 = true
#local_la_modules = $(patsubst %, $(localmoduledir)/%, $(module_LTLIBRARIES))
#EXTRA_DIST = ucx-$(PKG_CONFIG_NAME).pc.in
#pkgconfigdir = $(libdir)/pkgconfig
#pkgconfig_DATA = ucx-$(PKG_CONFIG_NAME).pc
all: all-am

.SUFFIXES:
.SUFFIXES: .c .lo .o .obj
$(srcdir)/Makefile.in: # $(srcdir)/Makefile.am $(top_srcdir)/config/module.am $(top_srcdir)/config/module-pkg-config.am $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --foreign src/uct/sm/mm/xpmem/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --foreign src/uct/sm/mm/xpmem/Makefile
.PRECIOUS: Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe);; \
	esac;
$(top_srcdir)/config/module.am $(top_srcdir)/config/module-pkg-config.am:

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure: # $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4): # $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):
ucx-xpmem.pc: $(top_builddir)/config.status $(srcdir)/ucx-xpmem.pc.in
	cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@

install-moduleLTLIBRARIES: $(module_LTLIBRARIES)
	@$(NORMAL_INSTALL)
	@list='$(module_LTLIBRARIES)'; test -n "$(moduledir)" || list=; \
	list2=; for p in $$list; do \
	  if test -f $$p; then \
	    list2="$$list2 $$p"; \
	  else :; fi; \
	done; \
	test -z "$$list2" || { \
	  echo " $(MKDIR_P) '$(DESTDIR)$(moduledir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(moduledir)" || exit 1; \
	  echo " $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL) $(INSTALL_STRIP_FLAG) $$list2 '$(DESTDIR)$(moduledir)'"; \
	  $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL) $(INSTALL_STRIP_FLAG) $$list2 "$(DESTDIR)$(moduledir)"; \
	}

uninstall-moduleLTLIBRARIES:
	@$(NORMAL_UNINSTALL)
	@list='$(module_LTLIBRARIES)'; test -n "$(moduledir)" || list=; \
	for p in $$list; do \
	  $(am__strip_dir) \
	  echo " $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=uninstall rm -f '$(DESTDIR)$(moduledir)/$$f'"; \
	  $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=uninstall rm -f "$(DESTDIR)$(moduledir)/$$f"; \
	done

clean-moduleLTLIBRARIES:
	-test -z "$(module_LTLIBRARIES)" || rm -f $(module_LTLIBRARIES)
	@list='$(module_LTLIBRARIES)'; \
	locs=`for p in $$list; do echo $$p; done | \
	      sed 's|^[^/]*$$|.|; s|/[^/]*$$||; s|$$|/so_locations|' | \
	      sort -u`; \
	test -z "$$locs" || { \
	  echo rm -f $${locs}; \
	  rm -f $${locs}; \
	}

libuct_xpmem.la: $(libuct_xpmem_la_OBJECTS) $(libuct_xpmem_la_DEPENDENCIES) $(EXTRA_libuct_xpmem_la_DEPENDENCIES) 
	$(AM_V_CCLD)$(libuct_xpmem_la_LINK) $(am_libuct_xpmem_la_rpath) $(libuct_xpmem_la_OBJECTS) $(libuct_xpmem_la_LIBADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT)

distclean-compile:
	-rm -f *.tab.c

include ./$(DEPDIR)/libuct_xpmem_la-mm_xpmem.Plo

.c.o:
	$(AM_V_CC)depbase=`echo $@ | sed 's|[^/]*$$|$(DEPDIR)/&|;s|\.o$$||'`;\
	$(COMPILE) -MT $@ -MD -MP -MF $$depbase.Tpo -c -o $@ $< &&\
	$(am__mv) $$depbase.Tpo $$depbase.Po
#	$(AM_V_CC)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(COMPILE) -c -o $@ $<

.c.obj:
	$(AM_V_CC)depbase=`echo $@ | sed 's|[^/]*$$|$(DEPDIR)/&|;s|\.obj$$||'`;\
	$(COMPILE) -MT $@ -MD -MP -MF $$depbase.Tpo -c -o $@ `$(CYGPATH_W) '$<'` &&\
	$(am__mv) $$depbase.Tpo $$depbase.Po
#	$(AM_V_CC)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(COMPILE) -c -o $@ `$(CYGPATH_W) '$<'`

.c.lo:
	$(AM_V_CC)depbase=`echo $@ | sed 's|[^/]*$$|$(DEPDIR)/&|;s|\.lo$$||'`;\
	$(LTCOMPILE) -MT $@ -MD -MP -MF $$depbase.Tpo -c -o $@ $< &&\
	$(am__mv) $$depbase.Tpo $$depbase.Plo
#	$(AM_V_CC)source='$<' object='$@' libtool=yes \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(LTCOMPILE) -c -o $@ $<

libuct_xpmem_la-mm_xpmem.lo: mm_xpmem.c
	$(AM_V_CC)$(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=compile $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(libuct_xpmem_la_CPPFLAGS) $(CPPFLAGS) $(libuct_xpmem_la_CFLAGS) $(CFLAGS) -MT libuct_xpmem_la-mm_xpmem.lo -MD -MP -MF $(DEPDIR)/libuct_xpmem_la-mm_xpmem.Tpo -c -o libuct_xpmem_la-mm_xpmem.lo `test -f 'mm_xpmem.c' || echo '$(srcdir)/'`mm_xpmem.c
	$(AM_V_at)$(am__mv) $(DEPDIR)/libuct_xpmem_la-mm_xpmem.Tpo $(DEPDIR)/libuct_xpmem_la-mm_xpmem.Plo
#	$(AM_V_CC)source='mm_xpmem.c' object='libuct_xpmem_la-mm_xpmem.lo' libtool=yes \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=compile $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(libuct_xpmem_la_CPPFLAGS) $(CPPFLAGS) $(libuct_xpmem_la_CFLAGS) $(CFLAGS) -c -o libuct_xpmem_la-mm_xpmem.lo `test -f 'mm_xpmem.c' || echo '$(srcdir)/'`mm_xpmem.c

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs
install-pkgconfigDATA: $(pkgconfig_DATA)
	@$(NORMAL_INSTALL)
	@list='$(pkgconfig_DATA)'; test -n "$(pkgconfigdir)" || list=; \
	if test -n "$$list"; then \
	  echo " $(MKDIR_P) '$(DESTDIR)$(pkgconfigdir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(pkgconfigdir)" || exit 1; \
	fi; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; \
	done | $(am__base_list) | \
	while read files; do \
	  echo " $(INSTALL_DATA) $$files '$(DESTDIR)$(pkgconfigdir)'"; \
	  $(INSTALL_DATA) $$files "$(DESTDIR)$(pkgconfigdir)" || exit $$?; \
	done

uninstall-pkgconfigDATA:
	@$(NORMAL_UNINSTALL)
	@list='$(pkgconfig_DATA)'; test -n "$(pkgconfigdir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	dir='$(DESTDIR)$(pkgconfigdir)'; $(am__uninstall_files_from_dir)

ID: $(am__tagged_files)
	$(am__define_uniq_tagged_files); mkid -fID $$unique
tags: tags-am
TAGS: tags

tags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	set x; \
	here=`pwd`; \
	$(am__define_uniq_tagged_files); \
	shift; \
	if test -z "$(ETAGS_ARGS)$$*$$unique"; then :; else \
	  test -n "$$unique" || unique=$$empty_fix; \
	  if test $$# -gt 0; then \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      "$$@" $$unique; \
	  else \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      $$unique; \
	  fi; \
	fi
ctags: ctags-am

CTAGS: ctags
ctags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	$(am__define_uniq_tagged_files); \
	test -z "$(CTAGS_ARGS)$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && $(am__cd) $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) "$$here"
cscopelist: cscopelist-am

cscopelist-am: $(am__tagged_files)
	list='$(am__tagged_files)'; \
	case "$(srcdir)" in \
	  [\\/]* | ?:[\\/]*) sdir="$(srcdir)" ;; \
	  *) sdir=$(subdir)/$(srcdir) ;; \
	esac; \
	for i in $$list; do \
	  if test -f "$$i"; then \
	    echo "$(subdir)/$$i"; \
	  else \
	    echo "$$sdir/$$i"; \
	  fi; \
	done >> $(top_builddir)/cscope.files

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags

distdir: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-local:
all-am: Makefile $(LTLIBRARIES) $(DATA) all-local
installdirs:
	for dir in "$(DESTDIR)$(moduledir)" "$(DESTDIR)$(pkgconfigdir)"; do \
	  test -z "$$dir" || $(MKDIR_P) "$$dir"; \
	done
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-generic clean-libtool clean-moduleLTLIBRARIES \
	mostlyclean-am

distclean: distclean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
distclean-am: clean-am distclean-compile distclean-generic \
	distclean-tags

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am: install-moduleLTLIBRARIES install-pkgconfigDATA

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am:

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic \
	mostlyclean-libtool

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-moduleLTLIBRARIES uninstall-pkgconfigDATA

.MAKE: install-am install-strip

.PHONY: CTAGS GTAGS TAGS all all-am all-local check check-am clean \
	clean-generic clean-libtool clean-moduleLTLIBRARIES \
	cscopelist-am ctags ctags-am distclean distclean-compile \
	distclean-generic distclean-libtool distclean-tags distdir dvi \
	dvi-am html html-am info info-am install install-am \
	install-data install-data-am install-dvi install-dvi-am \
	install-exec install-exec-am install-html install-html-am \
	install-info install-info-am install-man \
	install-moduleLTLIBRARIES install-pdf install-pdf-am \
	install-pkgconfigDATA install-ps install-ps-am install-strip \
	installcheck installcheck-am installdirs maintainer-clean \
	maintainer-clean-generic mostlyclean mostlyclean-compile \
	mostlyclean-generic mostlyclean-libtool pdf pdf-am ps ps-am \
	tags tags-am uninstall uninstall-am \
	uninstall-moduleLTLIBRARIES uninstall-pkgconfigDATA


#all-local: $(local_la_modules)

# Create symbolic links for the built modules under $(localmoduledir)
# Link also *.la files to create proper makefile dependencies
#$(local_la_modules): $(module_LTLIBRARIES)
#	$(AM_V_at)$(MKDIR_P) $(localmoduledir)
#	$(AM_V_at)for lib in *.la $(objdir)/*$(shrext)*; do \
#		(cd $(localmoduledir) && $(LN_RS) -nf $(shell pwd)/$$lib); \
#	done
#	@for lib in *.la $(objdir)/*$(shrext)*; do \
#		$(AM_V_LN) $$lib; \
#	done

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
