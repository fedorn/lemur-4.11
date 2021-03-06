// Reminder: Modify typemap.dat to customize the header file generated by wsdl2h
/* mashup.h
   Generated by wsdl2h 1.2.9l from t.wsdl calc.wsdl mashup.wsdl and typemap.dat
   2007-12-23 20:02:45 GMT
   Copyright (C) 2001-2007 Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL or Genivia's license for commercial use.
*/

/* NOTE:

 - Compile this file with soapcpp2 to complete the code generation process.
 - Use soapcpp2 option -I to specify paths for #import
   To build with STL, 'stlvector.h' is imported from 'import' dir in package.
 - Use wsdl2h options -c and -s to generate pure C code or C++ code without STL.
 - Use 'typemap.dat' to control schema namespace bindings and type mappings.
   It is strongly recommended to customize the names of the namespace prefixes
   generated by wsdl2h. To do so, modify the prefix bindings in the Namespaces
   section below and add the modified lines to 'typemap.dat' to rerun wsdl2h.
 - Use Doxygen (www.doxygen.org) to browse this file.
 - Use wsdl2h option -l to view the software license terms.

   DO NOT include this file directly into your project.
   Include only the soapcpp2-generated headers and source code files.
*/

//gsoapopt cw

/******************************************************************************\
 *                                                                            *
 *                                                                            *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/


/* NOTE:

It is strongly recommended to customize the names of the namespace prefixes
generated by wsdl2h. To do so, modify the prefix bindings below and add the
modified lines to typemap.dat to rerun wsdl2h:

ns1 = "http://tempuri.org/t.xsd"
ns2 = "urn:calc"
ns3 = "urn:daystoxmas"

*/

//gsoap ns1   schema namespace:	http://tempuri.org/t.xsd
//gsoap ns2   schema namespace:	urn:calc
//gsoap ns3   schema namespace:	urn:daystoxmas
//gsoap ns1   schema form:	unqualified
//gsoap ns2   schema form:	unqualified
//gsoap ns3   schema form:	qualified

/******************************************************************************\
 *                                                                            *
 * Schema Types                                                               *
 *                                                                            *
\******************************************************************************/



/// Element "urn:daystoxmas":daystoxmas.
/// Note: use wsdl2h option -g to generate this global element declaration.


/// Element "http://tempuri.org/t.xsd":gmt of complexType.

/// "http://tempuri.org/t.xsd":gmt is a complexType.
struct _ns1__gmt
{
};


/// Element "http://tempuri.org/t.xsd":gmtResponse of complexType.

/// "http://tempuri.org/t.xsd":gmtResponse is a complexType.
struct _ns1__gmtResponse
{
/// Element param-1 of type xs:dateTime.
    time_t                               param_1                        1;	///< Required element.
};


/// Element "urn:daystoxmas":commingtotown of complexType.

/// "urn:daystoxmas":commingtotown is a complexType.
struct _ns3__commingtotown
{
/// Element days of type xs:int.
    int                                  days                           1;	///< Required element.
};

/******************************************************************************\
 *                                                                            *
 * Services                                                                   *
 *                                                                            *
\******************************************************************************/


//gsoap ns2  service name:	calc 
//gsoap ns2  service type:	calcPortType 
//gsoap ns2  service port:	http://websrv.cs.fsu.edu/~engelen/calcserver.cgi 
//gsoap ns2  service namespace:	urn:calc 
//gsoap ns2  service transport:	http://schemas.xmlsoap.org/soap/http 

//gsoap ns4  service name:	Service 
//gsoap ns4  service type:	ServicePortType 
//gsoap ns4  service port:	http://localhost:80 
//gsoap ns4  service namespace:	http://localhost:80/Service.wsdl 
//gsoap ns4  service transport:	http://schemas.xmlsoap.org/soap/http 

//gsoap ns5  service name:	mashup 
//gsoap ns5  service type:	PortType 
//gsoap ns5  service port:	http://www.cs.fsu.edu/~engelen/mashup.cgi 
//gsoap ns5  service namespace:	http://www.genivia.com/mashup.wsdl 
//gsoap ns5  service transport:	http://schemas.xmlsoap.org/soap/http 

/** @mainpage Service Definitions

@section Service_bindings Bindings
  - @ref calc
  - @ref Service
  - @ref mashup

*/

/**

@page calc Binding "calc"

@section calc_service Service Documentation "calc"
gSOAP 2.7.9l generated service definition

@section calc_operations Operations of Binding  "calc"
  - @ref ns2__add
  - @ref ns2__sub
  - @ref ns2__mul
  - @ref ns2__div
  - @ref ns2__pow

@section calc_ports Endpoints of Binding  "calc"
  - http://websrv.cs.fsu.edu/~engelen/calcserver.cgi

Note: use wsdl2h option -N to change the service binding prefix name

*/

/**

@page Service Binding "Service"

@section Service_service Service Documentation "Service"
gSOAP 2.7.9l generated service definition

@section Service_operations Operations of Binding  "Service"
  - @ref __ns4__gmt

@section Service_ports Endpoints of Binding  "Service"
  - http://localhost:80

Note: use wsdl2h option -N to change the service binding prefix name

*/

/**

@page mashup Binding "mashup"

@section mashup_operations Operations of Binding  "mashup"
  - @ref __ns5__dtx

@section mashup_ports Endpoints of Binding  "mashup"
  - http://www.cs.fsu.edu/~engelen/mashup.cgi

Note: use wsdl2h option -N to change the service binding prefix name

*/

/******************************************************************************\
 *                                                                            *
 * calc                                                                       *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * ns2__add                                                                   *
 *                                                                            *
\******************************************************************************/


/// Operation "ns2__add" of service binding "calc"

/**

Operation details:

Sums two values
  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns2__add(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             *result
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns2__add(
    struct soap *soap,
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             *result
  );
@endcode

*/

//gsoap ns2  service method-style:	add rpc
//gsoap ns2  service method-encoding:	add http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns2  service method-action:	add ""
int ns2__add(
    double                              a,	///< Request parameter
    double                              b,	///< Request parameter
    double                             *result	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * ns2__sub                                                                   *
 *                                                                            *
\******************************************************************************/


/// Operation "ns2__sub" of service binding "calc"

/**

Operation details:

Subtracts two values
  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns2__sub(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             *result
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns2__sub(
    struct soap *soap,
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             *result
  );
@endcode

*/

//gsoap ns2  service method-style:	sub rpc
//gsoap ns2  service method-encoding:	sub http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns2  service method-action:	sub ""
int ns2__sub(
    double                              a,	///< Request parameter
    double                              b,	///< Request parameter
    double                             *result	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * ns2__mul                                                                   *
 *                                                                            *
\******************************************************************************/


/// Operation "ns2__mul" of service binding "calc"

/**

Operation details:

Multiplies two values
  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns2__mul(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             *result
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns2__mul(
    struct soap *soap,
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             *result
  );
@endcode

*/

//gsoap ns2  service method-style:	mul rpc
//gsoap ns2  service method-encoding:	mul http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns2  service method-action:	mul ""
int ns2__mul(
    double                              a,	///< Request parameter
    double                              b,	///< Request parameter
    double                             *result	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * ns2__div                                                                   *
 *                                                                            *
\******************************************************************************/


/// Operation "ns2__div" of service binding "calc"

/**

Operation details:

Divides two values
  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns2__div(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             *result
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns2__div(
    struct soap *soap,
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             *result
  );
@endcode

*/

//gsoap ns2  service method-style:	div rpc
//gsoap ns2  service method-encoding:	div http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns2  service method-action:	div ""
int ns2__div(
    double                              a,	///< Request parameter
    double                              b,	///< Request parameter
    double                             *result	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * ns2__pow                                                                   *
 *                                                                            *
\******************************************************************************/


/// Operation "ns2__pow" of service binding "calc"

/**

Operation details:

Raises a to b
  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns2__pow(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             *result
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns2__pow(
    struct soap *soap,
    // request parameters:
    double                              a,
    double                              b,
    // response parameters:
    double                             *result
  );
@endcode

*/

//gsoap ns2  service method-style:	pow rpc
//gsoap ns2  service method-encoding:	pow http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns2  service method-action:	pow ""
int ns2__pow(
    double                              a,	///< Request parameter
    double                              b,	///< Request parameter
    double                             *result	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * Service                                                                    *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * __ns4__gmt                                                                 *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns4__gmt" of service binding "Service"

/**

Operation details:

Service definition of function t__gmt
  - SOAP document/literal style

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns4__gmt(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    struct _ns1__gmt*                   ns1__gmt,
    // response parameters:
    struct _ns1__gmtResponse*           ns1__gmtResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns4__gmt(
    struct soap *soap,
    // request parameters:
    struct _ns1__gmt*                   ns1__gmt,
    // response parameters:
    struct _ns1__gmtResponse*           ns1__gmtResponse
  );
@endcode

*/

//gsoap ns4  service method-style:	gmt document
//gsoap ns4  service method-encoding:	gmt literal
//gsoap ns4  service method-action:	gmt ""
int __ns4__gmt(
    struct _ns1__gmt*                   ns1__gmt,	///< Request parameter
    struct _ns1__gmtResponse*           ns1__gmtResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * mashup                                                                     *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * __ns5__dtx                                                                 *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns5__dtx" of service binding "mashup"

/**

Operation details:

  - SOAP document/literal style

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns5__dtx(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    _XML                                ns3__daystoxmas,
    // response parameters:
    struct _ns3__commingtotown*         ns3__commingtotown
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns5__dtx(
    struct soap *soap,
    // request parameters:
    _XML                                ns3__daystoxmas,
    // response parameters:
    struct _ns3__commingtotown*         ns3__commingtotown
  );
@endcode

*/

//gsoap ns5  service method-style:	dtx document
//gsoap ns5  service method-encoding:	dtx literal
//gsoap ns5  service method-action:	dtx ""
int __ns5__dtx(
    _XML                                ns3__daystoxmas,	///< Request parameter
    struct _ns3__commingtotown*         ns3__commingtotown	///< Response parameter
);

/* End of mashup.h */
