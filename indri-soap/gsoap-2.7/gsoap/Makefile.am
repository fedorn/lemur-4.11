## This is the input file for automake, which will generate Makefile.in ##
## not a GNU package. You can remove this line, if
## you have all needed files, that a GNU package needs
AUTOMAKE_OPTIONS = foreign 1.4

SUBDIRS=src wsdl @SAMPLE_DIRS@
CLEANFILES=soapcpp2 stdsoap2_cpp.cpp stdsoap2_ck.c stdsoap2_ck_cpp.cpp stdsoap2_ssl.c stdsoap2_ssl_cpp.cpp

##	*~ *.req.xml *.res.xml *.nsmap *.wsdl *.xsd *Proxy.h \
##	*.o soapH.h soapStub.h soapC.cpp soapC.c soapClient.cpp soapClient.c soapServer.cpp soapServer.c

AM_CXXFLAGS=$(SOAPCPP2_DEBUG) -D$(platform)
AM_CFLAGS=$(SOAPCPP2_DEBUG) -D$(platform)

## we cannot build stdsoap2.o from 2 different sources (stdsoap2.cpp and stdsoap2.c), so we need an intermediate target:
stdsoap2_ck.c: stdsoap2.cpp
	$(LN_S) $(srcdir)/stdsoap2.cpp stdsoap2_ck.c

stdsoap2_cpp.cpp: stdsoap2.cpp
	$(LN_S) $(srcdir)/stdsoap2.cpp stdsoap2_cpp.cpp

stdsoap2_ck_cpp.cpp: stdsoap2.cpp
	$(LN_S) $(srcdir)/stdsoap2.cpp stdsoap2_ck_cpp.cpp

stdsoap2_ssl.c: stdsoap2.cpp
	$(LN_S) $(srcdir)/stdsoap2.cpp stdsoap2_ssl.c

stdsoap2_ssl_cpp.cpp: stdsoap2.cpp
	$(LN_S) $(srcdir)/stdsoap2.cpp stdsoap2_ssl_cpp.cpp

lib_LIBRARIES = libgsoap.a libgsoap++.a libgsoapck.a libgsoapck++.a libgsoapssl.a libgsoapssl++.a
libgsoap_a_SOURCES=stdsoap2.c
libgsoap_a_CFLAGS=$(SOAPCPP2_DEBUG) $(SOAPCPP2_NONAMESPACES) -D$(platform)
libgsoap___a_SOURCES=stdsoap2_cpp.cpp
libgsoap___a_CXXFLAGS=$(SOAPCPP2_DEBUG) $(SOAPCPP2_NONAMESPACES) -D$(platform)
libgsoapck_a_SOURCES=stdsoap2_ck.c
libgsoapck_a_CFLAGS=$(SOAPCPP2_DEBUG) $(SOAPCPP2_NONAMESPACES) -D$(platform) -DWITH_COOKIES
libgsoapck___a_SOURCES=stdsoap2_ck_cpp.cpp
libgsoapck___a_CXXFLAGS=$(SOAPCPP2_DEBUG) $(SOAPCPP2_NONAMESPACES) -D$(platform) -DWITH_COOKIES
libgsoapssl_a_SOURCES=stdsoap2_ssl.c
libgsoapssl_a_CFLAGS=$(SOAPCPP2_DEBUG) $(SOAPCPP2_NONAMESPACES) -D$(platform) -DWITH_OPENSSL -DWITH_DOM -DWITH_GZIP
libgsoapssl___a_SOURCES=stdsoap2_ssl_cpp.cpp
libgsoapssl___a_CXXFLAGS=$(SOAPCPP2_DEBUG) $(SOAPCPP2_NONAMESPACES) -D$(platform) -DWITH_OPENSSL -DWITH_DOM -DWITH_GZIP

BUILT_SOURCES=stdsoap2_cpp.cpp $(lib_LIBRARIES)

include_HEADERS = stdsoap2.h

install-data-hook:
	$(LN_S) $(top_builddir)/gsoap/src/soapcpp2 $(top_builddir)/gsoap/soapcpp2 || echo "ok, link already exists".
	$(LN_S) $(top_builddir)/gsoap/wsdl/wsdl2h $(top_builddir)/gsoap/wsdl2h || echo "ok, link already exists".

