/*
 * Copyright (c) 2007 Norman Brandinger <norm@goes.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "T1S1-LAES-VoP-Abstract-Syntax-Module"
 * 	found in "T1S1-LAES-VoP-Abstract-Syntax-Module.asn"
 * 	`asn1c -funnamed-unions -findirect-choice -fbless-SIZE -fcompound-names -fnative-types`
 */

#ifndef	_TransportAddress_H_
#define	_TransportAddress_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TransportAddress_PR {
	TransportAddress_PR_NOTHING,	/* No components present */
	TransportAddress_PR_ipAddress,
	TransportAddress_PR_ipSourceRoute,
	TransportAddress_PR_ipxAddress,
	TransportAddress_PR_ip6Address,
	TransportAddress_PR_netBios,
	TransportAddress_PR_nsap,
	TransportAddress_PR_nonStandardAddress,
	/* Extensions may appear below */
	
} TransportAddress_PR;
typedef enum TransportAddress__ipSourceRoute__routing_PR {
	TransportAddress__ipSourceRoute__routing_PR_NOTHING,	/* No components present */
	TransportAddress__ipSourceRoute__routing_PR_strict,
	TransportAddress__ipSourceRoute__routing_PR_loose,
	/* Extensions may appear below */
	
} TransportAddress__ipSourceRoute__routing_PR;

/* Forward declarations */
struct NonStandardParameter;

/* TransportAddress */
typedef struct TransportAddress {
	TransportAddress_PR present;
	union {
		struct TransportAddress__ipAddress {
			OCTET_STRING_t	 ip;
			long	 port;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ipAddress;
		struct TransportAddress__ipSourceRoute {
			OCTET_STRING_t	 ip;
			long	 port;
			struct TransportAddress__ipSourceRoute__route {
				A_SEQUENCE_OF(OCTET_STRING_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} route;
			struct TransportAddress__ipSourceRoute__routing {
				TransportAddress__ipSourceRoute__routing_PR present;
				union {
					NULL_t	 strict;
					NULL_t	 loose;
					/*
					 * This type is extensible,
					 * possible extensions are below.
					 */
				};
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} routing;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ipSourceRoute;
		struct TransportAddress__ipxAddress {
			OCTET_STRING_t	 node;
			OCTET_STRING_t	 netnum;
			OCTET_STRING_t	 port;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ipxAddress;
		struct TransportAddress__ip6Address {
			OCTET_STRING_t	 ip;
			long	 port;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ip6Address;
		OCTET_STRING_t	 netBios;
		OCTET_STRING_t	 nsap;
		struct NonStandardParameter	*nonStandardAddress;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	};
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TransportAddress_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TransportAddress;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NonStandardParameter.h"

#endif	/* _TransportAddress_H_ */
