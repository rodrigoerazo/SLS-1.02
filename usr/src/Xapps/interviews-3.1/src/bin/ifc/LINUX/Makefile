# Makefile generated by imake - do not edit!
# $XConsortium: imake.c,v 1.65 91/07/25 17:50:17 rws Exp $

# Read "InterViews/template" to understand how this Makefile was generated.
# Edit <InterViews/arch.def> to add support for a new platform.
# Edit <InterViews/iv-1.cf> to change platform-specific parameters.
# Edit <InterViews/local.def> to change site-specific parameters.
# Edit <Imakefile> to change actions that make should perform.

# architecture:  Linux

# $Header: /home/x_cvs/mit/config/x386.cf,v 1.59 1993/02/08 22:11:15 dawes Exp $
# platform:  $XConsortium: x386.cf,v 1.7 91/08/16 19:30:10 gildea Exp $

#  --------------------------------------------------------------------
#  X386Conf.tmpl  -- configuration parameters for X386
#  This file is automatically generated -- DO NOT EDIT
#  --------------------------------------------------------------------

         X386SRC = $(SERVERSRC)/ddx/x386
    VGADRIVERSRC = $(X386SRC)/vga256/drivers
   VGA2DRIVERSRC = $(X386SRC)/vga2/drivers
   HGA2DRIVERSRC = $(X386SRC)/hga2/drivers
     RENDERERSRC = $(FONTSRC)/lib/font
 RENDERERCONFOBJ = $(RENDERERSRC)/fontfile/rendererConf.o
RENDERERCONFSUBDIR = $(RENDERERSRC)/fontfile
         VGAOBJS =                    $(VGADRIVERSRC)/et4000/et4000.o                    $(VGADRIVERSRC)/et3000/et3000.o                    $(VGADRIVERSRC)/pvga1/pvga1.o                    $(VGADRIVERSRC)/gvga/gvga.o                    $(VGADRIVERSRC)/ati/ati.o                    $(VGADRIVERSRC)/tvga8900/tvga8900.o

      VGASUBDIRS =                    et4000                    et3000                    pvga1                    gvga                    ati                    tvga8900

        VGA2OBJS =                    $(VGA2DRIVERSRC)/et4000/et4000.o                    $(VGA2DRIVERSRC)/et3000/et3000.o                    $(VGA2DRIVERSRC)/pvga1/pvga1.o                    $(VGA2DRIVERSRC)/gvga/gvga.o                    $(VGA2DRIVERSRC)/tvga8900/tvga8900.o                    $(VGA2DRIVERSRC)/generic/generic.o

     VGA2SUBDIRS =                    et4000                    et3000                    pvga1                    gvga                    tvga8900                    generic

        HGA2OBJS =                    $(HGA2DRIVERSRC)/hga6845/hga6845.o

     HGA2SUBDIRS =                    hga6845

    RENDERERLIBS =                    $(RENDERERSRC)/Speedo/libSpeedo.a                    $(RENDERERSRC)/Type1/libType1.a

 RENDERERSUBDIRS =                    Speedo                    Type1

      VGACONFOBJ = $(X386SRC)/vga256/vga256Conf.o
   VGACONFSUBDIR = $(X386SRC)/vga256
        VGABUILD = -DBUILD_VGA256

    X386CONFOBJS = $(VGACONFOBJ)
 X386CONFSUBDIRS = $(VGACONFSUBDIR)

 X386SCREENFLAGS = $(VGA2BUILD) $(HGA2BUILD) $(VGABUILD)

# operating system:  		Linux 	(Usenet)

              SHELL = /bin/sh

              IMAKE = imake
         IMAKEFLAGS = \
	-T "InterViews/template"\
	-I$(CONFIGSRC) -I$(XCONFIGDIR)\
	$(SPECIAL_IMAKEFLAGS)
 SPECIAL_IMAKEFLAGS = -f $(SRC)/Imakefile -DInObjectCodeDir
             DEPEND = makedepend
     DEPEND_CCFLAGS = $(CCDEFINES) $(CCINCLUDES)
               MAKE = make
           PASSARCH = ARCH="$(ARCH)" SPECIAL_IMAKEFLAGS="$(SPECIAL_IMAKEFLAGS)"
          ARCHORCPU = Linux
               ARCH = $(ARCHORCPU)$(SPECIAL_ARCH)
       SPECIAL_ARCH =

           CCDRIVER = g++
           CCSUFFIX = c
                SRC = ..
              SLASH = /
               SRCS = $(SRC)$(SLASH)*.$(CCSUFFIX)
               OBJS = *.o
               AOUT = a.out

            CCFLAGS = $(APP_CCFLAGS) $(IV_CCFLAGS) $(EXTRA_CCFLAGS)
         IV_CCFLAGS = \
	\
	\
	$(SHARED_CCFLAGS)\
	$(CCDEFINES)\
	$(CCINCLUDES)
      DEBUG_CCFLAGS = -g
   OPTIMIZE_CCFLAGS = -O2
     SHARED_CCFLAGS =
      EXTRA_CCFLAGS = -m486 -DNO_ASM

          CCDEFINES = $(APP_CCDEFINES) $(IV_CCDEFINES) $(EXTRA_CCDEFINES)
       IV_CCDEFINES = $(LANGUAGE_CCDEFINES) $(BACKWARD_CCDEFINES)
 LANGUAGE_CCDEFINES = -D__cplusplus
 BACKWARD_CCDEFINES =
    EXTRA_CCDEFINES = 		-D_POSIX_SOURCE -D_BSD_SOURCE -D_GNU_SOURCE 	-Dlinux

         CCINCLUDES = $(APP_CCINCLUDES) $(IV_CCINCLUDES) $(EXTRA_CCINCLUDES)
      IV_CCINCLUDES = \
	$(BACKWARD_CCINCLUDES)\
	$(TOP_CCINCLUDES)\
	$(X_CCINCLUDES)
BACKWARD_CCINCLUDES =
     TOP_CCINCLUDES = -I$(INCSRC)
       X_CCINCLUDES =
   EXTRA_CCINCLUDES = -I/usr/g++-include

          CCLDFLAGS = $(APP_CCLDFLAGS) $(IV_CCLDFLAGS) $(EXTRA_CCLDFLAGS)
       IV_CCLDFLAGS = \
	\
	\
	$(NONSHARED_CCLDFLAGS)
NONSHARED_CCLDFLAGS =
    EXTRA_CCLDFLAGS =

          CCDEPLIBS = $(APP_CCDEPLIBS) $(IV_CCDEPLIBS) $(EXTRA_CCDEPLIBS)
       IV_CCDEPLIBS = \
	$(DEPLIBUNIDRAW)\
	$(DEPLIBGRAPHIC)\
	$(DEPLIBIV)\
	$(DEPLIBXEXT)\
	$(DEPLIBX11)\
	$(DEPLIBM)
    EXTRA_CCDEPLIBS =

           CCLDLIBS = $(APP_CCLDLIBS) $(IV_CCLDLIBS) $(EXTRA_CCLDLIBS)
        IV_CCLDLIBS = \
	$(LIBDIRPATH)\
	$(LDLIBUNIDRAW)\
	$(LDLIBGRAPHIC)\
	$(LDLIBIV)\
	$(XLIBDIRPATH)\
	$(LDLIBXEXT)\
	$(LDLIBX11)\
	$(LDLIBM)\
	$(ABSLIBDIRPATH)
     EXTRA_CCLDLIBS = -lg++

            INSTALL = 	sh $(SCRIPTSRC)/install.sh
       INSTPGMFLAGS = -s
       INSTBINFLAGS = -m 0755
       INSTUIDFLAGS = -m 4755
       INSTLIBFLAGS = -m 0644
       INSTINCFLAGS = -m 0444
       INSTMANFLAGS = -m 0444
       INSTDATFLAGS = -m 0444
      INSTKMEMFLAGS = -m 4755

                 AR = ar clq
                 AS = as
                 CP = cp
                CPP = 		/lib/cpp $(EXTRA_CCDEFINES)
      PREPROCESSCMD = 	/lib/cpp $(EXTRA_CCDEFINES)
                 LD = ld
                 LN = ln -s
          MKDIRHIER = $(SHELL) $(SCRIPTSRC)/mkdirhier.sh
                 MV = mv
             RANLIB = ranlib
    RANLIBINSTFLAGS =
                 RM = rm -f
             RM_CMD = $(RM) ,* .emacs_* *..c *.BAK *.CKP *.a *.bak *.ln *.o a.out core errs make.log make.out tags TAGS
              TROFF = psroff

                TOP = ../../../../.
        CURRENT_DIR = ./src/bin/ifc/LINUX

              IVSRC = $(TOP)/src
             BINSRC = $(IVSRC)/bin
          CONFIGSRC = $(IVSRC)/config
             INCSRC = $(IVSRC)/include
             LIBSRC = $(IVSRC)/lib
             MANSRC = $(IVSRC)/man
          SCRIPTSRC = $(BINSRC)/scripts

             BINDIR = $(TOP)/installed/bin/$(ARCH)
          CONFIGDIR = $(TOP)/installed/config
             INCDIR = $(TOP)/installed/include
             LIBDIR = $(TOP)/installed/lib/$(ARCH)
          LIBALLDIR = $(TOP)/installed/lib/all
             MANDIR = $(TOP)/installed/man

       ABSCONFIGDIR = /interviews/config
          ABSLIBDIR = /interviews/lib/$(ARCH)
       ABSLIBALLDIR = /interviews/lib/all
         XCONFIGDIR = /usr/lib/X11/config
            XINCDIR = /usr/include
            XLIBDIR = /usr/lib
          PSFONTDIR = /usr/lib/ps

all::

Makefile::
	-@if [ -f Makefile ]; then \
	$(RM) Makefile.bak; \
	$(MV) Makefile Makefile.bak; \
	else exit 0; fi
	$(IMAKE) $(IMAKEFLAGS) -DTOPDIR=$(TOP) -DCURDIR=$(CURRENT_DIR)
Makefiles::
depend::
install::

clean::
	@$(RM_CMD) "#"*

# -------------------------------------------------------------------------

#
# Ifc -- simple file chooser program
#

 DEPLIBIV = $(LIBSRC)/IV/$(ARCH)/libIV.a
 DEPLIBXEXT =
 DEPLIBX11 =
 DEPLIBM =

 LIBDIRPATH =
 LDLIBIV = -L$(LIBSRC)/IV/$(ARCH) -lIV
 XLIBDIRPATH =
 LDLIBXEXT = -lXext
 LDLIBX11 = -lX11
 LDLIBM = -lm
 ABSLIBDIRPATH =

PROGRAM	= ifc

all:: $(AOUT)

$(AOUT):  $(CCDEPLIBS)
	-@if [ ! -w $@ ]; then $(RM) $@; else exit 0; fi
	$(CCDRIVER) $(CCLDFLAGS) -o $@ $(OBJS) $(CCLDLIBS)

install:: $(AOUT)
	-@if [ -d $(BINDIR) ]; then exit 0; \
	else (set -x; $(MKDIRHIER) $(BINDIR)); fi
	$(INSTALL) -c $(INSTPGMFLAGS) $(INSTBINFLAGS) $(AOUT) $(BINDIR)/$(PROGRAM)
	$(RM) $(AOUT)

depend::
	$(DEPEND) -s "# DO NOT DELETE" -- $(DEPEND_CCFLAGS) -- $(SRCS)

$(AOUT): main.o
main.o: $(SRC)/main.$(CCSUFFIX)
	@$(RM) main.o main..c
	$(CCDRIVER)  $(CCFLAGS) -c $(SRC)/main.$(CCSUFFIX)

