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

#include <asn_internal.h>

#include "BandwidthChangeInfo.h"

static asn_TYPE_member_t asn_MBR_bandwidthDetails_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_BandwidthDetails,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_bandwidthDetails_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_bandwidthDetails_specs_5 = {
	sizeof(struct BandwidthChangeInfo__bandwidthDetails),
	offsetof(struct BandwidthChangeInfo__bandwidthDetails, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bandwidthDetails_5 = {
	"bandwidthDetails",
	"bandwidthDetails",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_bandwidthDetails_tags_5,
	sizeof(asn_DEF_bandwidthDetails_tags_5)
		/sizeof(asn_DEF_bandwidthDetails_tags_5[0]) - 1, /* 1 */
	asn_DEF_bandwidthDetails_tags_5,	/* Same as above */
	sizeof(asn_DEF_bandwidthDetails_tags_5)
		/sizeof(asn_DEF_bandwidthDetails_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_bandwidthDetails_5,
	1,	/* Single element */
	&asn_SPC_bandwidthDetails_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_BandwidthChangeInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BandwidthChangeInfo, bCTransactionType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BCTransactionType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"bCTransactionType"
		},
	{ ATF_POINTER, 4, offsetof(struct BandwidthChangeInfo, requestedBandwidth),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Bandwidth,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"requestedBandwidth"
		},
	{ ATF_POINTER, 3, offsetof(struct BandwidthChangeInfo, grantedBandwidth),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Bandwidth,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"grantedBandwidth"
		},
	{ ATF_POINTER, 2, offsetof(struct BandwidthChangeInfo, bandwidthDetails),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_bandwidthDetails_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"bandwidthDetails"
		},
	{ ATF_POINTER, 1, offsetof(struct BandwidthChangeInfo, bCRejectionReason),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VisibleString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"bCRejectionReason"
		},
};
static ber_tlv_tag_t asn_DEF_BandwidthChangeInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_BandwidthChangeInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bCTransactionType at 809 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* requestedBandwidth at 810 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* grantedBandwidth at 814 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* bandwidthDetails at 817 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* bCRejectionReason at 819 */
};
static asn_SEQUENCE_specifics_t asn_SPC_BandwidthChangeInfo_specs_1 = {
	sizeof(struct BandwidthChangeInfo),
	offsetof(struct BandwidthChangeInfo, _asn_ctx),
	asn_MAP_BandwidthChangeInfo_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_BandwidthChangeInfo = {
	"BandwidthChangeInfo",
	"BandwidthChangeInfo",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_BandwidthChangeInfo_tags_1,
	sizeof(asn_DEF_BandwidthChangeInfo_tags_1)
		/sizeof(asn_DEF_BandwidthChangeInfo_tags_1[0]), /* 1 */
	asn_DEF_BandwidthChangeInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandwidthChangeInfo_tags_1)
		/sizeof(asn_DEF_BandwidthChangeInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_BandwidthChangeInfo_1,
	5,	/* Elements count */
	&asn_SPC_BandwidthChangeInfo_specs_1	/* Additional specs */
};

