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

#include "PresentationIndicator.h"

static asn_TYPE_member_t asn_MBR_PresentationIndicator_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PresentationIndicator, presentationAllowed),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"presentationAllowed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PresentationIndicator, presentationRestricted),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"presentationRestricted"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PresentationIndicator, addressNotAvailable),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"addressNotAvailable"
		},
};
static asn_TYPE_tag2member_t asn_MAP_PresentationIndicator_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* presentationAllowed at 1124 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* presentationRestricted at 1125 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* addressNotAvailable at 1126 */
};
static asn_CHOICE_specifics_t asn_SPC_PresentationIndicator_specs_1 = {
	sizeof(struct PresentationIndicator),
	offsetof(struct PresentationIndicator, _asn_ctx),
	offsetof(struct PresentationIndicator, present),
	sizeof(((struct PresentationIndicator *)0)->present),
	asn_MAP_PresentationIndicator_tag2el_1,
	3,	/* Count of tags in the map */
	0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_PresentationIndicator = {
	"PresentationIndicator",
	"PresentationIndicator",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_PresentationIndicator_1,
	3,	/* Elements count */
	&asn_SPC_PresentationIndicator_specs_1	/* Additional specs */
};

