# Simple Makefile for C++ example with muliple client proxy linkage
WSDL2H=../../bin/wsdl2h
GSOAP=../../bin/soapcpp2
SOAPH=../../stdsoap2.h
SOAPC=../../stdsoap2.c
SOAPCPP=../../stdsoap2.cpp
SOAPDOMC=../../dom.c
SOAPDOMCPP=../../dom.cpp
CC=gcc
CPP=g++
LIBS=
COFLAGS=-O2
CWFLAGS=-Wall
CIFLAGS=-I.. -I../..
CMFLAGS=
CFLAGS= $(CWFLAGS) $(COFLAGS) $(CIFLAGS) $(CMFLAGS)
all:		xmas
xmas:		xmas.cpp envC.o stdsoap2.o gmtProxy.o calccalcProxy.o xmasmashupService.o
		$(CPP) $(CFLAGS) -o xmas xmas.cpp envC.o stdsoap2.o gmtProxy.o calccalcProxy.o xmasmashupService.o gmtC.cpp calcC.cpp xmasC.cpp
stdsoap2.o:	$(SOAPH) $(SOAPC)
		$(CPP) $(CFLAGS) -DWITH_NONAMESPACES -c ../../stdsoap2.cpp
envC.o:		env.h header.h fault.h
		$(GSOAP) -CS -penv env.h
		$(CPP) $(CFLAGS) -c envC.cpp
gmtProxy.cpp:	gmt.h
		$(GSOAP) -i -C -qgmt gmt.h
gmtProxy.o:	gmtProxy.cpp
		$(CPP) $(CFLAGS) -c gmtProxy.cpp
calccalcProxy.cpp:	calc.h
		$(GSOAP) -i -C -qcalc calc.h
calccalcProxy.o:	calccalcProxy.cpp
		$(CPP) $(CFLAGS) -c calccalcProxy.cpp
xmasmashupService.cpp:	xmas.hpp
		$(GSOAP) -i -S -qxmas xmas.hpp
xmasmashupService.o:	xmasmashupService.cpp
		$(CPP) $(CFLAGS) -c xmasmashupService.cpp
xmas.hpp:	xmas.wsdl
		$(WSDL2H) -s -o xmas.hpp xmas.wsdl
.PHONY: clean distclean
clean:
		rm -f *.o soapH.h soapStub.h soapC.cpp soapClient.cpp soapServer.cpp soapClientLib.cpp soapServerLib.cpp soap*Proxy.h soap*Proxy.cpp soap*Service.h soap*Service.cpp
distclean:
		rm -f *.o soapH.h soapStub.h soapC.cpp soapClient.cpp soapServer.cpp soapClientLib.cpp soapServerLib.cpp soap*Proxy.h soap*Proxy.cpp soap*Service.h soap*Service.cpp
		rm -f *.xsd *.xml *.nsmap *.log
		rm -f xmas
