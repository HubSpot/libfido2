/*
 * Copyright (c) 2020-2022 Yubico AB. All rights reserved.
 * Use of this source code is governed by a BSD-style
 * license that can be found in the LICENSE file.
 */

#ifndef _WIREDATA_FIDO2_H
#define _WIREDATA_FIDO2_H

#define WIREDATA_CTAP_INIT				\
	0xff, 0xff, 0xff, 0xff, 0x86, 0x00, 0x11, 0x80,	\
	0x43, 0x56, 0x40, 0xb1, 0x4e, 0xd9, 0x2d, 0x00,	\
	0x22, 0x00, 0x02, 0x02, 0x05, 0x02, 0x01, 0x05,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#define WIREDATA_CTAP_KEEPALIVE				\
	0x00, 0x22, 0x00, 0x02, 0xbb, 0x00, 0x01, 0x02,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#define WIREDATA_CTAP_CBOR_INFO				\
	0x00, 0x22, 0x00, 0x02, 0x90, 0x00, 0xb9, 0x00,	\
	0xa9, 0x01, 0x83, 0x66, 0x55, 0x32, 0x46, 0x5f,	\
	0x56, 0x32, 0x68, 0x46, 0x49, 0x44, 0x4f, 0x5f,	\
	0x32, 0x5f, 0x30, 0x6c, 0x46, 0x49, 0x44, 0x4f,	\
	0x5f, 0x32, 0x5f, 0x31, 0x5f, 0x50, 0x52, 0x45,	\
	0x02, 0x82, 0x6b, 0x63, 0x72, 0x65, 0x64, 0x50,	\
	0x72, 0x6f, 0x74, 0x65, 0x63, 0x74, 0x6b, 0x68,	\
	0x6d, 0x61, 0x63, 0x2d, 0x73, 0x65, 0x63, 0x72,	\
	0x00, 0x22, 0x00, 0x02, 0x00, 0x65, 0x74, 0x03,	\
	0x50, 0x19, 0x56, 0xe5, 0xbd, 0xa3, 0x74, 0x45,	\
	0xf1, 0xa8, 0x14, 0x35, 0x64, 0x03, 0xfd, 0xbc,	\
	0x18, 0x04, 0xa5, 0x62, 0x72, 0x6b, 0xf5, 0x62,	\
	0x75, 0x70, 0xf5, 0x64, 0x70, 0x6c, 0x61, 0x74,	\
	0xf4, 0x69, 0x63, 0x6c, 0x69, 0x65, 0x6e, 0x74,	\
	0x50, 0x69, 0x6e, 0xf4, 0x75, 0x63, 0x72, 0x65,	\
	0x64, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x4d,	\
	0x00, 0x22, 0x00, 0x02, 0x01, 0x67, 0x6d, 0x74,	\
	0x50, 0x72, 0x65, 0x76, 0x69, 0x65, 0x77, 0xf5,	\
	0x05, 0x19, 0x04, 0xb0, 0x06, 0x81, 0x01, 0x07,	\
	0x08, 0x08, 0x18, 0x80, 0x0a, 0x82, 0xa2, 0x63,	\
	0x61, 0x6c, 0x67, 0x26, 0x64, 0x74, 0x79, 0x70,	\
	0x65, 0x6a, 0x70, 0x75, 0x62, 0x6c, 0x69, 0x63,	\
	0x2d, 0x6b, 0x65, 0x79, 0xa2, 0x63, 0x61, 0x6c,	\
	0x67, 0x27, 0x64, 0x74, 0x79, 0x70, 0x65, 0x6a,	\
	0x00, 0x22, 0x00, 0x02, 0x02, 0x70, 0x75, 0x62,	\
	0x6c, 0x69, 0x63, 0x2d, 0x6b, 0x65, 0x79, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#define WIREDATA_CTAP_CBOR_AUTHKEY			\
	0x00, 0x22, 0x00, 0x02, 0x90, 0x00, 0x51, 0x00,	\
	0xa1, 0x01, 0xa5, 0x01, 0x02, 0x03, 0x38, 0x18,	\
	0x20, 0x01, 0x21, 0x58, 0x20, 0x2a, 0xb8, 0x2d,	\
	0x36, 0x69, 0xab, 0x30, 0x9d, 0xe3, 0x5e, 0x9b,	\
	0xfb, 0x94, 0xfc, 0x1d, 0x92, 0x95, 0xaf, 0x01,	\
	0x47, 0xfe, 0x4b, 0x87, 0xe5, 0xcf, 0x3f, 0x05,	\
	0x0b, 0x39, 0xda, 0x17, 0x49, 0x22, 0x58, 0x20,	\
	0x15, 0x1b, 0xbe, 0x08, 0x78, 0x60, 0x4d, 0x3c,	\
	0x00, 0x22, 0x00, 0x02, 0x00, 0x3f, 0xf1, 0x60,	\
	0xa6, 0xd8, 0xf8, 0xed, 0xce, 0x4a, 0x30, 0x5d,	\
	0x1a, 0xaf, 0x80, 0xc4, 0x0a, 0xd2, 0x6f, 0x77,	\
	0x38, 0x12, 0x97, 0xaa, 0xbd, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#define WIREDATA_CTAP_CBOR_PINTOKEN			\
	0x00, 0x22, 0x00, 0x02, 0x90, 0x00, 0x14, 0x00,	\
	0xa1, 0x02, 0x50, 0xee, 0x40, 0x4c, 0x85, 0xd7,	\
	0xa1, 0x2f, 0x56, 0xc4, 0x4e, 0xc5, 0x93, 0x41,	\
	0xd0, 0x3b, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#define WIREDATA_CTAP_CBOR_STATUS			\
	0x00, 0x22, 0x00, 0x02, 0x90, 0x00, 0x01, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#define WIREDATA_CTAP_CBOR_RETRIES			\
	0x00, 0x22, 0x00, 0x02, 0x90, 0x00, 0x04, 0x00,	\
	0xa1, 0x03, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#define WIREDATA_CTAP_CBOR_ASSERT			\
	0x00, 0x22, 0x00, 0x02, 0x90, 0x00, 0xcb, 0x00,	\
	0xa3, 0x01, 0xa2, 0x62, 0x69, 0x64, 0x58, 0x40,	\
	0x4a, 0x4c, 0x9e, 0xcc, 0x81, 0x7d, 0x42, 0x03,	\
	0x2b, 0x41, 0xd1, 0x38, 0xd3, 0x49, 0xb4, 0xfc,	\
	0xfb, 0xe4, 0x4e, 0xe4, 0xff, 0x76, 0x34, 0x16,	\
	0x68, 0x06, 0x9d, 0xa6, 0x01, 0x32, 0xb9, 0xff,	\
	0xc2, 0x35, 0x0d, 0x89, 0x43, 0x66, 0x12, 0xf8,	\
	0x8e, 0x5b, 0xde, 0xf4, 0xcc, 0xec, 0x9d, 0x03,	\
	0x00, 0x92, 0x00, 0x0e, 0x00, 0x85, 0xc2, 0xf5,	\
	0xe6, 0x8e, 0xeb, 0x3f, 0x3a, 0xec, 0xc3, 0x1d,	\
	0x04, 0x6e, 0xf3, 0x5b, 0x88, 0x64, 0x74, 0x79,	\
	0x70, 0x65, 0x6a, 0x70, 0x75, 0x62, 0x6c, 0x69,	\
	0x63, 0x2d, 0x6b, 0x65, 0x79, 0x02, 0x58, 0x25,	\
	0x49, 0x96, 0x0d, 0xe5, 0x88, 0x0e, 0x8c, 0x68,	\
	0x74, 0x34, 0x17, 0x0f, 0x64, 0x76, 0x60, 0x5b,	\
	0x8f, 0xe4, 0xae, 0xb9, 0xa2, 0x86, 0x32, 0xc7,	\
	0x00, 0x92, 0x00, 0x0e, 0x01, 0x99, 0x5c, 0xf3,	\
	0xba, 0x83, 0x1d, 0x97, 0x63, 0x04, 0x00, 0x00,	\
	0x00, 0x09, 0x03, 0x58, 0x47, 0x30, 0x45, 0x02,	\
	0x21, 0x00, 0xcf, 0x3f, 0x36, 0x0e, 0x1f, 0x6f,	\
	0xd6, 0xa0, 0x9d, 0x13, 0xcf, 0x55, 0xf7, 0x49,	\
	0x8f, 0xc8, 0xc9, 0x03, 0x12, 0x76, 0x41, 0x75,	\
	0x7b, 0xb5, 0x0a, 0x90, 0xa5, 0x82, 0x26, 0xf1,	\
	0x6b, 0x80, 0x02, 0x20, 0x34, 0x9b, 0x7a, 0x82,	\
	0x00, 0x92, 0x00, 0x0e, 0x02, 0xd3, 0xe1, 0x79,	\
	0x49, 0x55, 0x41, 0x9f, 0xa4, 0x06, 0x06, 0xbd,	\
	0xc8, 0xb9, 0x2b, 0x5f, 0xe1, 0xa7, 0x99, 0x1c,	\
	0xa1, 0xfc, 0x7e, 0x3e, 0xd5, 0x85, 0x2e, 0x11,	\
	0x75, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#define WIREDATA_CTAP_CBOR_CRED				\
	0x00, 0x91, 0x00, 0x03, 0x90, 0x03, 0xe1, 0x00,	\
	0xa3, 0x01, 0x66, 0x70, 0x61, 0x63, 0x6b, 0x65,	\
	0x64, 0x02, 0x58, 0xc4, 0x49, 0x96, 0x0d, 0xe5,	\
	0x88, 0x0e, 0x8c, 0x68, 0x74, 0x34, 0x17, 0x0f,	\
	0x64, 0x76, 0x60, 0x5b, 0x8f, 0xe4, 0xae, 0xb9,	\
	0xa2, 0x86, 0x32, 0xc7, 0x99, 0x5c, 0xf3, 0xba,	\
	0x83, 0x1d, 0x97, 0x63, 0x45, 0x00, 0x00, 0x00,	\
	0x00, 0xf8, 0xa0, 0x11, 0xf3, 0x8c, 0x0a, 0x4d,	\
	0x00, 0x91, 0x00, 0x03, 0x00, 0x15, 0x80, 0x06,	\
	0x17, 0x11, 0x1f, 0x9e, 0xdc, 0x7d, 0x00, 0x40,	\
	0xed, 0x88, 0x48, 0xa1, 0xdb, 0x56, 0x4d, 0x0f,	\
	0x0d, 0xc8, 0x8f, 0x0f, 0xe9, 0x16, 0xb1, 0x78,	\
	0xa9, 0x40, 0x98, 0x71, 0xa0, 0xb3, 0xf2, 0xcf,	\
	0x05, 0x73, 0x6c, 0x12, 0xbf, 0x00, 0x96, 0xf3,	\
	0x7b, 0x93, 0xba, 0x49, 0xee, 0x23, 0xb4, 0x78,	\
	0x2e, 0xfb, 0xce, 0x27, 0xa8, 0xc2, 0x26, 0x78,	\
	0x00, 0x91, 0x00, 0x03, 0x01, 0xcc, 0x95, 0x2d,	\
	0x40, 0xdb, 0xd1, 0x40, 0x3d, 0x2b, 0xa3, 0x31,	\
	0xa0, 0x75, 0x82, 0x63, 0xf0, 0xa5, 0x01, 0x02,	\
	0x03, 0x26, 0x20, 0x01, 0x21, 0x58, 0x20, 0x9d,	\
	0x95, 0xa1, 0xb5, 0xd6, 0x11, 0xbf, 0xe2, 0x28,	\
	0xa0, 0x7f, 0xca, 0x1e, 0xd9, 0x09, 0x0f, 0x0d,	\
	0xe7, 0x8e, 0x29, 0xe8, 0x2e, 0x11, 0xdb, 0x55,	\
	0x62, 0x13, 0xd7, 0x26, 0xc2, 0x7e, 0x2b, 0x22,	\
	0x00, 0x91, 0x00, 0x03, 0x02, 0x58, 0x20, 0xbe,	\
	0x74, 0x2a, 0xac, 0xde, 0x11, 0x40, 0x76, 0x31,	\
	0x0b, 0xed, 0x55, 0xde, 0xf3, 0x03, 0xe4, 0x1c,	\
	0xac, 0x42, 0x63, 0x8f, 0xe8, 0x30, 0x63, 0xb7,	\
	0x07, 0x4e, 0x5d, 0xfb, 0x17, 0x5e, 0x9b, 0x03,	\
	0xa3, 0x63, 0x61, 0x6c, 0x67, 0x26, 0x63, 0x73,	\
	0x69, 0x67, 0x58, 0x48, 0x30, 0x46, 0x02, 0x21,	\
	0x00, 0xfb, 0xd1, 0x26, 0x76, 0x34, 0x74, 0xac,	\
	0x00, 0x91, 0x00, 0x03, 0x03, 0xf6, 0xd8, 0x5c,	\
	0x5d, 0xbc, 0xda, 0xe0, 0x43, 0xe0, 0xa5, 0x42,	\
	0x9f, 0xc7, 0xe2, 0x18, 0x3e, 0xe2, 0x2c, 0x94,	\
	0x78, 0xbf, 0x9c, 0xeb, 0x3e, 0x9d, 0x02, 0x21,	\
	0x00, 0xab, 0x21, 0x1b, 0xc4, 0x30, 0x69, 0xee,	\
	0x7f, 0x09, 0xe6, 0x6b, 0x99, 0x98, 0x34, 0x07,	\
	0x7b, 0x9a, 0x58, 0xb2, 0xe8, 0x77, 0xe0, 0xba,	\
	0x7d, 0xab, 0x65, 0xf8, 0xba, 0x2a, 0xcb, 0x9a,	\
	0x00, 0x91, 0x00, 0x03, 0x04, 0x41, 0x63, 0x78,	\
	0x35, 0x63, 0x81, 0x59, 0x02, 0xb3, 0x30, 0x82,	\
	0x02, 0xaf, 0x30, 0x82, 0x01, 0x97, 0xa0, 0x03,	\
	0x02, 0x01, 0x02, 0x02, 0x04, 0x48, 0x5b, 0x3d,	\
	0xb6, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48,	\
	0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00,	\
	0x30, 0x21, 0x31, 0x1f, 0x30, 0x1d, 0x06, 0x03,	\
	0x55, 0x04, 0x03, 0x0c, 0x16, 0x59, 0x75, 0x62,	\
	0x00, 0x91, 0x00, 0x03, 0x05, 0x69, 0x63, 0x6f,	\
	0x20, 0x46, 0x49, 0x44, 0x4f, 0x20, 0x50, 0x72,	\
	0x65, 0x76, 0x69, 0x65, 0x77, 0x20, 0x43, 0x41,	\
	0x30, 0x1e, 0x17, 0x0d, 0x31, 0x38, 0x30, 0x34,	\
	0x31, 0x32, 0x31, 0x30, 0x35, 0x37, 0x31, 0x30,	\
	0x5a, 0x17, 0x0d, 0x31, 0x38, 0x31, 0x32, 0x33,	\
	0x31, 0x31, 0x30, 0x35, 0x37, 0x31, 0x30, 0x5a,	\
	0x30, 0x6f, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03,	\
	0x00, 0x91, 0x00, 0x03, 0x06, 0x55, 0x04, 0x06,	\
	0x13, 0x02, 0x53, 0x45, 0x31, 0x12, 0x30, 0x10,	\
	0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c, 0x09, 0x59,	\
	0x75, 0x62, 0x69, 0x63, 0x6f, 0x20, 0x41, 0x42,	\
	0x31, 0x22, 0x30, 0x20, 0x06, 0x03, 0x55, 0x04,	\
	0x0b, 0x0c, 0x19, 0x41, 0x75, 0x74, 0x68, 0x65,	\
	0x6e, 0x74, 0x69, 0x63, 0x61, 0x74, 0x6f, 0x72,	\
	0x20, 0x41, 0x74, 0x74, 0x65, 0x73, 0x74, 0x61,	\
	0x00, 0x91, 0x00, 0x03, 0x07, 0x74, 0x69, 0x6f,	\
	0x6e, 0x31, 0x28, 0x30, 0x26, 0x06, 0x03, 0x55,	\
	0x04, 0x03, 0x0c, 0x1f, 0x59, 0x75, 0x62, 0x69,	\
	0x63, 0x6f, 0x20, 0x55, 0x32, 0x46, 0x20, 0x45,	\
	0x45, 0x20, 0x53, 0x65, 0x72, 0x69, 0x61, 0x6c,	\
	0x20, 0x31, 0x32, 0x31, 0x33, 0x39, 0x33, 0x39,	\
	0x31, 0x32, 0x36, 0x30, 0x59, 0x30, 0x13, 0x06,	\
	0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x02, 0x01,	\
	0x00, 0x91, 0x00, 0x03, 0x08, 0x06, 0x08, 0x2a,	\
	0x86, 0x48, 0xce, 0x3d, 0x03, 0x01, 0x07, 0x03,	\
	0x42, 0x00, 0x04, 0xfb, 0x2c, 0xdd, 0x30, 0x43,	\
	0x28, 0xc5, 0x72, 0x4a, 0x50, 0xcc, 0xe6, 0xf6,	\
	0x0b, 0xad, 0x7d, 0x27, 0xa9, 0x1b, 0x59, 0xe1,	\
	0xe6, 0x6f, 0x29, 0x7b, 0x89, 0xc9, 0xd4, 0x3d,	\
	0xc2, 0xb2, 0xc7, 0x78, 0x89, 0xb4, 0xf0, 0xff,	\
	0x9d, 0x02, 0x28, 0xcb, 0x94, 0x6d, 0xfc, 0xe0,	\
	0x00, 0x91, 0x00, 0x03, 0x09, 0x1b, 0x19, 0x58,	\
	0x9b, 0x67, 0x80, 0x4a, 0xac, 0x97, 0x7f, 0x28,	\
	0x18, 0x9c, 0xcd, 0xb3, 0x25, 0x74, 0xca, 0x28,	\
	0xa3, 0x6c, 0x30, 0x6a, 0x30, 0x22, 0x06, 0x09,	\
	0x2b, 0x06, 0x01, 0x04, 0x01, 0x82, 0xc4, 0x0a,	\
	0x02, 0x04, 0x15, 0x31, 0x2e, 0x33, 0x2e, 0x36,	\
	0x2e, 0x31, 0x2e, 0x34, 0x2e, 0x31, 0x2e, 0x34,	\
	0x31, 0x34, 0x38, 0x32, 0x2e, 0x31, 0x2e, 0x36,	\
	0x00, 0x91, 0x00, 0x03, 0x0a, 0x30, 0x13, 0x06,	\
	0x0b, 0x2b, 0x06, 0x01, 0x04, 0x01, 0x82, 0xe5,	\
	0x1c, 0x02, 0x01, 0x01, 0x04, 0x04, 0x03, 0x02,	\
	0x04, 0x30, 0x30, 0x21, 0x06, 0x0b, 0x2b, 0x06,	\
	0x01, 0x04, 0x01, 0x82, 0xe5, 0x1c, 0x01, 0x01,	\
	0x04, 0x04, 0x12, 0x04, 0x10, 0xf8, 0xa0, 0x11,	\
	0xf3, 0x8c, 0x0a, 0x4d, 0x15, 0x80, 0x06, 0x17,	\
	0x11, 0x1f, 0x9e, 0xdc, 0x7d, 0x30, 0x0c, 0x06,	\
	0x00, 0x91, 0x00, 0x03, 0x0b, 0x03, 0x55, 0x1d,	\
	0x13, 0x01, 0x01, 0xff, 0x04, 0x02, 0x30, 0x00,	\
	0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86,	\
	0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00, 0x03,	\
	0x82, 0x01, 0x01, 0x00, 0x32, 0xf3, 0xe4, 0xbd,	\
	0x58, 0xd7, 0x42, 0x2b, 0xaf, 0x49, 0x99, 0x86,	\
	0x08, 0x1f, 0x0d, 0xa9, 0x3b, 0xc6, 0xaa, 0x1c,	\
	0x72, 0x11, 0xf9, 0x28, 0x53, 0xeb, 0xf3, 0xeb,	\
	0x00, 0x91, 0x00, 0x03, 0x0c, 0x73, 0xda, 0x69,	\
	0x3b, 0x06, 0xde, 0x31, 0x33, 0x8e, 0x5d, 0x02,	\
	0xec, 0xf6, 0x76, 0xe9, 0x5c, 0x42, 0xbe, 0xa5,	\
	0x8f, 0x25, 0xd3, 0x37, 0x3f, 0x77, 0xbb, 0x2a,	\
	0x9d, 0x7c, 0xb2, 0x3e, 0x11, 0x8c, 0x41, 0xd4,	\
	0x9a, 0x4c, 0x9a, 0xd8, 0xf3, 0xe2, 0xa4, 0xec,	\
	0x01, 0x77, 0x7a, 0x74, 0xa8, 0xc4, 0x12, 0x43,	\
	0xc3, 0x1e, 0xce, 0x20, 0x8f, 0x2d, 0x0f, 0x6e,	\
	0x00, 0x91, 0x00, 0x03, 0x0d, 0xbc, 0x61, 0x9b,	\
	0xe1, 0x84, 0xa1, 0x72, 0xf6, 0xa9, 0xac, 0xcb,	\
	0xf8, 0x73, 0x6d, 0x5b, 0xe2, 0x98, 0xb3, 0x6b,	\
	0xec, 0xe7, 0x1e, 0x77, 0x8d, 0x0a, 0x69, 0xaa,	\
	0xf9, 0x94, 0xb8, 0x63, 0x6d, 0xe8, 0xfa, 0xf6,	\
	0x2f, 0xd3, 0xce, 0x7f, 0x04, 0x4c, 0x32, 0x2c,	\
	0xf7, 0x26, 0x3e, 0x34, 0x99, 0xe6, 0xa5, 0xb2,	\
	0xb0, 0x2a, 0xbb, 0xad, 0x5b, 0xd9, 0xec, 0xe5,	\
	0x00, 0x91, 0x00, 0x03, 0x0e, 0xb0, 0x71, 0x4d,	\
	0x73, 0xbb, 0x94, 0x61, 0x49, 0x9c, 0x94, 0x2a,	\
	0x5f, 0x1d, 0xcc, 0xaf, 0x65, 0x03, 0x3b, 0x39,	\
	0x39, 0xd4, 0x47, 0xd9, 0xfc, 0xc4, 0x7b, 0x0b,	\
	0x16, 0xd8, 0xe9, 0x01, 0xfc, 0xec, 0x3f, 0x8c,	\
	0x1b, 0xc0, 0xc6, 0xac, 0x0b, 0x5d, 0x74, 0xc7,	\
	0xbb, 0x03, 0x05, 0x69, 0x17, 0xe9, 0x98, 0x1a,	\
	0x19, 0xb9, 0x09, 0x5c, 0xa1, 0xf4, 0xab, 0x9f,	\
	0x00, 0x91, 0x00, 0x03, 0x0f, 0x02, 0x7c, 0x28,	\
	0x0f, 0x8a, 0xf9, 0xed, 0x1d, 0x29, 0x3c, 0xf6,	\
	0xcc, 0x2f, 0x04, 0x6d, 0x9a, 0xd6, 0x62, 0xb4,	\
	0xa9, 0x6e, 0xb1, 0xca, 0xca, 0xac, 0x5e, 0x05,	\
	0x3e, 0x83, 0x91, 0x47, 0x7c, 0x1f, 0x8b, 0x60,	\
	0x01, 0xde, 0x65, 0x3a, 0xbf, 0xf2, 0xaa, 0xbb,	\
	0x55, 0x98, 0x86, 0x91, 0x7e, 0xad, 0x3b, 0x36,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#define WIREDATA_CTAP_CBOR_CREDMAN_META			\
	0x00, 0x12, 0x00, 0x04, 0x90, 0x00, 0x07, 0x00,	\
	0xa2, 0x01, 0x00, 0x02, 0x18, 0x19, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#define WIREDATA_CTAP_CBOR_CREDMAN_RPLIST		\
	0x00, 0x15, 0x00, 0x02, 0x90, 0x00, 0x37, 0x00,	\
	0xa3, 0x03, 0xa1, 0x62, 0x69, 0x64, 0x6a, 0x79,	\
	0x75, 0x62, 0x69, 0x63, 0x6f, 0x2e, 0x63, 0x6f,	\
	0x6d, 0x04, 0x58, 0x20, 0x37, 0x82, 0x09, 0xb7,	\
	0x2d, 0xef, 0xcb, 0xa9, 0x1d, 0xcb, 0xf8, 0x54,	\
	0xed, 0xb4, 0xda, 0xa6, 0x48, 0x82, 0x8a, 0x2c,	\
	0xbd, 0x18, 0x0a, 0xfc, 0x77, 0xa7, 0x44, 0x34,	\
	0x65, 0x5a, 0x1c, 0x7d, 0x05, 0x03, 0x00, 0x00,	\
	0x00, 0x15, 0x00, 0x02, 0x90, 0x00, 0x36, 0x00,	\
	0xa2, 0x03, 0xa1, 0x62, 0x69, 0x64, 0x6b, 0x79,	\
	0x75, 0x62, 0x69, 0x6b, 0x65, 0x79, 0x2e, 0x6f,	\
	0x72, 0x67, 0x04, 0x58, 0x20, 0x12, 0x6b, 0xba,	\
	0x6a, 0x2d, 0x7a, 0x81, 0x84, 0x25, 0x7b, 0x74,	\
	0xdd, 0x1d, 0xdd, 0x46, 0xb6, 0x2a, 0x8c, 0xa2,	\
	0xa7, 0x83, 0xfe, 0xdb, 0x5b, 0x19, 0x48, 0x73,	\
	0x55, 0xb7, 0xe3, 0x46, 0x09, 0x00, 0x00, 0x00,	\
	0x00, 0x15, 0x00, 0x02, 0x90, 0x00, 0x37, 0x00,	\
	0xa2, 0x03, 0xa1, 0x62, 0x69, 0x64, 0x6c, 0x77,	\
	0x65, 0x62, 0x61, 0x75, 0x74, 0x68, 0x6e, 0x2e,	\
	0x64, 0x65, 0x76, 0x04, 0x58, 0x20, 0xd6, 0x32,	\
	0x7d, 0x8c, 0x6a, 0x5d, 0xe6, 0xae, 0x0e, 0x33,	\
	0xd0, 0xa3, 0x31, 0xfb, 0x67, 0x77, 0xb9, 0x4e,	\
	0xf4, 0x73, 0x19, 0xfe, 0x7e, 0xfd, 0xfa, 0x82,	\
	0x70, 0x8e, 0x1f, 0xbb, 0xa2, 0x55, 0x00, 0x00

#define WIREDATA_CTAP_CBOR_CREDMAN_RKLIST		\
	0x00, 0x15, 0x00, 0x04, 0x90, 0x00, 0xc5, 0x00,	\
	0xa5, 0x06, 0xa3, 0x62, 0x69, 0x64, 0x58, 0x20,	\
	0xe4, 0xe1, 0x06, 0x31, 0xde, 0x00, 0x0f, 0x4f,	\
	0x12, 0x6e, 0xc9, 0x68, 0x2d, 0x43, 0x3f, 0xf1,	\
	0x02, 0x2c, 0x6e, 0xe6, 0x96, 0x10, 0xbf, 0x73,	\
	0x35, 0xc9, 0x20, 0x27, 0x06, 0xba, 0x39, 0x09,	\
	0x64, 0x6e, 0x61, 0x6d, 0x65, 0x6a, 0x62, 0x6f,	\
	0x62, 0x20, 0x62, 0x61, 0x6e, 0x61, 0x6e, 0x61,	\
	0x00, 0x15, 0x00, 0x04, 0x00, 0x6b, 0x64, 0x69,	\
	0x73, 0x70, 0x6c, 0x61, 0x79, 0x4e, 0x61, 0x6d,	\
	0x65, 0x67, 0x62, 0x62, 0x61, 0x6e, 0x61, 0x6e,	\
	0x61, 0x07, 0xa2, 0x62, 0x69, 0x64, 0x50, 0x19,	\
	0xf7, 0x78, 0x0c, 0xa0, 0xbc, 0xb9, 0xa6, 0xd5,	\
	0x1e, 0xd7, 0x87, 0xfb, 0x6c, 0x80, 0x03, 0x64,	\
	0x74, 0x79, 0x70, 0x65, 0x6a, 0x70, 0x75, 0x62,	\
	0x6c, 0x69, 0x63, 0x2d, 0x6b, 0x65, 0x79, 0x08,	\
	0x00, 0x15, 0x00, 0x04, 0x01, 0xa5, 0x01, 0x02,	\
	0x03, 0x26, 0x20, 0x01, 0x21, 0x58, 0x20, 0x81,	\
	0x6c, 0xdd, 0x8c, 0x8f, 0x8c, 0xc8, 0x43, 0xa7,	\
	0xbb, 0x79, 0x51, 0x09, 0xb1, 0xdf, 0xbe, 0xc4,	\
	0xa5, 0x54, 0x16, 0x9e, 0x58, 0x56, 0xb3, 0x0b,	\
	0x34, 0x4f, 0xa5, 0x6c, 0x05, 0xa2, 0x21, 0x22,	\
	0x58, 0x20, 0xcd, 0xc2, 0x0c, 0x99, 0x83, 0x5a,	\
	0x61, 0x73, 0xd8, 0xe0, 0x74, 0x23, 0x46, 0x64,	\
	0x00, 0x15, 0x00, 0x04, 0x02, 0x39, 0x4c, 0xb0,	\
	0xf4, 0x6c, 0x0a, 0x37, 0x72, 0xaa, 0xa8, 0xea,	\
	0x58, 0xd3, 0xd4, 0xe0, 0x51, 0xb2, 0x28, 0x09,	\
	0x05, 0x0a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x15, 0x00, 0x04, 0x90, 0x00, 0xa0, 0x00,	\
	0xa4, 0x06, 0xa3, 0x62, 0x69, 0x64, 0x58, 0x20,	\
	0x56, 0xa1, 0x3c, 0x06, 0x2b, 0xad, 0xa2, 0x21,	\
	0x7d, 0xcd, 0x91, 0x08, 0x47, 0xa8, 0x8a, 0x06,	\
	0x06, 0xf6, 0x66, 0x91, 0xf6, 0xeb, 0x89, 0xe4,	\
	0xdf, 0x26, 0xbc, 0x46, 0x59, 0xc3, 0x7d, 0xc0,	\
	0x64, 0x6e, 0x61, 0x6d, 0x65, 0x6a, 0x62, 0x6f,	\
	0x62, 0x20, 0x62, 0x61, 0x6e, 0x61, 0x6e, 0x61,	\
	0x00, 0x15, 0x00, 0x04, 0x00, 0x6b, 0x64, 0x69,	\
	0x73, 0x70, 0x6c, 0x61, 0x79, 0x4e, 0x61, 0x6d,	\
	0x65, 0x67, 0x62, 0x62, 0x61, 0x6e, 0x61, 0x6e,	\
	0x61, 0x07, 0xa2, 0x62, 0x69, 0x64, 0x50, 0xd8,	\
	0x27, 0x4b, 0x25, 0xed, 0x19, 0xef, 0x11, 0xaf,	\
	0xa6, 0x89, 0x7b, 0x84, 0x50, 0xe7, 0x62, 0x64,	\
	0x74, 0x79, 0x70, 0x65, 0x6a, 0x70, 0x75, 0x62,	\
	0x6c, 0x69, 0x63, 0x2d, 0x6b, 0x65, 0x79, 0x08,	\
	0x00, 0x15, 0x00, 0x04, 0x01, 0xa4, 0x01, 0x01,	\
	0x03, 0x27, 0x20, 0x06, 0x21, 0x58, 0x20, 0x8d,	\
	0xfe, 0x45, 0xd5, 0x7d, 0xb6, 0x17, 0xab, 0x86,	\
	0x2d, 0x32, 0xf6, 0x85, 0xf0, 0x92, 0x76, 0xb7,	\
	0xce, 0x73, 0xca, 0x4e, 0x0e, 0xfd, 0xd5, 0xdb,	\
	0x2a, 0x1d, 0x55, 0x90, 0x96, 0x52, 0xc2, 0x0a,	\
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x15, 0x00, 0x04, 0x90, 0x00, 0xa0, 0x00,	\
	0xa4, 0x06, 0xa3, 0x62, 0x69, 0x64, 0x58, 0x20,	\
	0x04, 0x0e, 0x0f, 0xa0, 0xcd, 0x60, 0x35, 0x9a,	\
	0xba, 0x47, 0x0c, 0x10, 0xb6, 0x82, 0x6e, 0x2f,	\
	0x66, 0xb9, 0xa7, 0xcf, 0xd8, 0x47, 0xb4, 0x3d,	\
	0xfd, 0x77, 0x1a, 0x38, 0x22, 0xa1, 0xda, 0xa5,	\
	0x64, 0x6e, 0x61, 0x6d, 0x65, 0x6a, 0x62, 0x6f,	\
	0x62, 0x20, 0x62, 0x61, 0x6e, 0x61, 0x6e, 0x61,	\
	0x00, 0x15, 0x00, 0x04, 0x00, 0x6b, 0x64, 0x69,	\
	0x73, 0x70, 0x6c, 0x61, 0x79, 0x4e, 0x61, 0x6d,	\
	0x65, 0x67, 0x62, 0x62, 0x61, 0x6e, 0x61, 0x6e,	\
	0x61, 0x07, 0xa2, 0x62, 0x69, 0x64, 0x50, 0x00,	\
	0x5d, 0xdf, 0xef, 0xe2, 0xf3, 0x06, 0xb2, 0xa5,	\
	0x46, 0x4d, 0x98, 0xbc, 0x14, 0x65, 0xc1, 0x64,	\
	0x74, 0x79, 0x70, 0x65, 0x6a, 0x70, 0x75, 0x62,	\
	0x6c, 0x69, 0x63, 0x2d, 0x6b, 0x65, 0x79, 0x08,	\
	0x00, 0x15, 0x00, 0x04, 0x01, 0xa4, 0x01, 0x01,	\
	0x03, 0x27, 0x20, 0x06, 0x21, 0x58, 0x20, 0x72,	\
	0x79, 0x14, 0x69, 0xdf, 0xcb, 0x64, 0x75, 0xee,	\
	0xd4, 0x45, 0x94, 0xbc, 0x48, 0x4d, 0x2a, 0x9f,	\
	0xc9, 0xf4, 0xb5, 0x1b, 0x05, 0xa6, 0x5b, 0x54,	\
	0x9a, 0xac, 0x6c, 0x2e, 0xc6, 0x90, 0x62, 0x0a,	\
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x15, 0x00, 0x04, 0x90, 0x00, 0xc3, 0x00,	\
	0xa4, 0x06, 0xa3, 0x62, 0x69, 0x64, 0x58, 0x20,	\
	0xce, 0x32, 0xd8, 0x79, 0xdd, 0x86, 0xa2, 0x42,	\
	0x7c, 0xc3, 0xe1, 0x95, 0x12, 0x93, 0x1a, 0x03,	\
	0xe6, 0x70, 0xb8, 0xff, 0xcd, 0xa5, 0xdf, 0x15,	\
	0xfc, 0x88, 0x2a, 0xf5, 0x44, 0xf1, 0x33, 0x9c,	\
	0x64, 0x6e, 0x61, 0x6d, 0x65, 0x6a, 0x62, 0x6f,	\
	0x62, 0x20, 0x62, 0x61, 0x6e, 0x61, 0x6e, 0x61,	\
	0x00, 0x15, 0x00, 0x04, 0x00, 0x6b, 0x64, 0x69,	\
	0x73, 0x70, 0x6c, 0x61, 0x79, 0x4e, 0x61, 0x6d,	\
	0x65, 0x67, 0x62, 0x62, 0x61, 0x6e, 0x61, 0x6e,	\
	0x61, 0x07, 0xa2, 0x62, 0x69, 0x64, 0x50, 0x0a,	\
	0x26, 0x5b, 0x7e, 0x1a, 0x2a, 0xba, 0x70, 0x5f,	\
	0x18, 0x26, 0x14, 0xb2, 0x71, 0xca, 0x98, 0x64,	\
	0x74, 0x79, 0x70, 0x65, 0x6a, 0x70, 0x75, 0x62,	\
	0x6c, 0x69, 0x63, 0x2d, 0x6b, 0x65, 0x79, 0x08,	\
	0x00, 0x15, 0x00, 0x04, 0x01, 0xa5, 0x01, 0x02,	\
	0x03, 0x26, 0x20, 0x01, 0x21, 0x58, 0x20, 0x8b,	\
	0x48, 0xf0, 0x69, 0xfb, 0x22, 0xfb, 0xf3, 0x86,	\
	0x57, 0x7c, 0xdd, 0x82, 0x2c, 0x1c, 0x0c, 0xdc,	\
	0x27, 0xe2, 0x6a, 0x4c, 0x1a, 0x10, 0x04, 0x27,	\
	0x51, 0x3e, 0x2a, 0x9d, 0x3a, 0xb6, 0xb5, 0x22,	\
	0x58, 0x20, 0x70, 0xfe, 0x91, 0x67, 0x64, 0x53,	\
	0x63, 0x83, 0x72, 0x31, 0xe9, 0xe5, 0x20, 0xb7,	\
	0x00, 0x15, 0x00, 0x04, 0x02, 0xee, 0xc9, 0xfb,	\
	0x63, 0xd7, 0xe4, 0x76, 0x39, 0x80, 0x82, 0x74,	\
	0xb8, 0xfa, 0x67, 0xf5, 0x1b, 0x8f, 0xe0, 0x0a,	\
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x15, 0x00, 0x04, 0x90, 0x00, 0xc3, 0x00,	\
	0xa4, 0x06, 0xa3, 0x62, 0x69, 0x64, 0x58, 0x20,	\
	0xf9, 0xa3, 0x67, 0xbf, 0x5e, 0x80, 0x95, 0xdb,	\
	0x4c, 0xc5, 0x8f, 0x65, 0x36, 0xc5, 0xaf, 0xdd,	\
	0x90, 0x2e, 0x62, 0x68, 0x67, 0x9c, 0xa2, 0x26,	\
	0x2f, 0x2a, 0xf9, 0x3a, 0xda, 0x15, 0xf2, 0x27,	\
	0x64, 0x6e, 0x61, 0x6d, 0x65, 0x6a, 0x62, 0x6f,	\
	0x62, 0x20, 0x62, 0x61, 0x6e, 0x61, 0x6e, 0x61,	\
	0x00, 0x15, 0x00, 0x04, 0x00, 0x6b, 0x64, 0x69,	\
	0x73, 0x70, 0x6c, 0x61, 0x79, 0x4e, 0x61, 0x6d,	\
	0x65, 0x67, 0x62, 0x62, 0x61, 0x6e, 0x61, 0x6e,	\
	0x61, 0x07, 0xa2, 0x62, 0x69, 0x64, 0x50, 0xfb,	\
	0xa6, 0xbe, 0xc1, 0x01, 0xf6, 0x7a, 0x81, 0xf9,	\
	0xcd, 0x6d, 0x20, 0x41, 0x7a, 0x1c, 0x40, 0x64,	\
	0x74, 0x79, 0x70, 0x65, 0x6a, 0x70, 0x75, 0x62,	\
	0x6c, 0x69, 0x63, 0x2d, 0x6b, 0x65, 0x79, 0x08,	\
	0x00, 0x15, 0x00, 0x04, 0x01, 0xa5, 0x01, 0x02,	\
	0x03, 0x26, 0x20, 0x01, 0x21, 0x58, 0x20, 0xda,	\
	0x2b, 0x53, 0xc3, 0xbe, 0x48, 0xf8, 0xab, 0xbd,	\
	0x06, 0x28, 0x46, 0xfa, 0x35, 0xab, 0xf9, 0xc5,	\
	0x2e, 0xfd, 0x3c, 0x38, 0x88, 0xb3, 0xe1, 0xa7,	\
	0xc5, 0xc6, 0xed, 0x72, 0x54, 0x37, 0x93, 0x22,	\
	0x58, 0x20, 0x12, 0x82, 0x32, 0x2d, 0xab, 0xbc,	\
	0x64, 0xb3, 0xed, 0xcc, 0xd5, 0x22, 0xec, 0x79,	\
	0x00, 0x15, 0x00, 0x04, 0x02, 0x4b, 0xe2, 0x4d,	\
	0x0c, 0x4b, 0x8d, 0x31, 0x4c, 0xb4, 0x0f, 0xd4,	\
	0xa9, 0xbe, 0x0c, 0xab, 0x9e, 0x0a, 0xc9, 0x0a,	\
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#define WIREDATA_CTAP_CBOR_BIO_INFO			\
	0x00, 0x10, 0x00, 0x04, 0x90, 0x00, 0x06, 0x00,	\
	0xa2, 0x02, 0x01, 0x03, 0x04, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#define WIREDATA_CTAP_CBOR_BIO_ENROLL			\
	0x00, 0x0a, 0x00, 0x05, 0xbb, 0x00, 0x01, 0x02,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x0a, 0x00, 0x05, 0xbb, 0x00, 0x01, 0x02,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x0a, 0x00, 0x05, 0xbb, 0x00, 0x01, 0x02,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x0a, 0x00, 0x05, 0x90, 0x00, 0x0a, 0x00,	\
	0xa3, 0x04, 0x42, 0x68, 0x96, 0x05, 0x00, 0x06,	\
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x0a, 0x00, 0x05, 0xbb, 0x00, 0x01, 0x02,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x0a, 0x00, 0x05, 0xbb, 0x00, 0x01, 0x02,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x0a, 0x00, 0x05, 0x90, 0x00, 0x06, 0x00,	\
	0xa2, 0x05, 0x00, 0x06, 0x01, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x0a, 0x00, 0x05, 0xbb, 0x00, 0x01, 0x02,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x0a, 0x00, 0x05, 0x90, 0x00, 0x06, 0x00,	\
	0xa2, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#define WIREDATA_CTAP_CBOR_BIO_ENUM			\
	0x00, 0x10, 0x00, 0x0f, 0x90, 0x00, 0x2e, 0x00,	\
	0xa1, 0x07, 0x83, 0xa2, 0x01, 0x42, 0xce, 0xa3,	\
	0x02, 0x67, 0x66, 0x69, 0x6e, 0x67, 0x65, 0x72,	\
	0x31, 0xa2, 0x01, 0x42, 0xbf, 0x5e, 0x02, 0x67,	\
	0x66, 0x69, 0x6e, 0x67, 0x65, 0x72, 0x32, 0xa2,	\
	0x01, 0x42, 0x5e, 0xd2, 0x02, 0x67, 0x66, 0x69,	\
	0x6e, 0x67, 0x65, 0x72, 0x33, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#define WIREDATA_CTAP_CBOR_LARGEBLOB_GET_ARRAY		\
	0x89, 0xc9, 0x8d, 0x28, 0x90, 0x01, 0xe6, 0x00,	\
	0xa1, 0x01, 0x59, 0x01, 0xe0, 0x81, 0xa3, 0x01,	\
	0x59, 0x01, 0xb8, 0xb3, 0x26, 0x24, 0x99, 0xde,	\
	0x06, 0x3f, 0xca, 0xde, 0x98, 0x8d, 0x9d, 0xc5,	\
	0x3f, 0x26, 0x6c, 0xc7, 0x40, 0x93, 0xc4, 0x88,	\
	0x06, 0x51, 0x4f, 0xb9, 0x61, 0xf2, 0xc9, 0x8d,	\
	0xbc, 0xce, 0x79, 0x08, 0xec, 0x90, 0xc5, 0x5b,	\
	0xe5, 0x0a, 0x72, 0x08, 0x7b, 0xe1, 0xf9, 0x16,	\
	0x89, 0xc9, 0x8d, 0x28, 0x00, 0x06, 0x8b, 0x76,	\
	0x32, 0xa0, 0xae, 0x55, 0xb2, 0x39, 0x71, 0xce,	\
	0x34, 0x4b, 0x6e, 0x6b, 0x89, 0xa6, 0x5e, 0x69,	\
	0x07, 0xac, 0xf6, 0x01, 0x3c, 0xba, 0x45, 0x7a,	\
	0x75, 0x25, 0x3a, 0xbd, 0x95, 0x22, 0x9d, 0xc3,	\
	0xe4, 0x42, 0x31, 0x5c, 0xb5, 0xf4, 0x64, 0x6a,	\
	0x56, 0x1d, 0xab, 0xc7, 0x6e, 0x96, 0x75, 0xe7,	\
	0xb3, 0x22, 0x0b, 0x82, 0xac, 0x57, 0x78, 0xdf,	\
	0x89, 0xc9, 0x8d, 0x28, 0x01, 0x57, 0x06, 0xc5,	\
	0x4b, 0x61, 0x0b, 0x4d, 0xa1, 0x66, 0xa0, 0x89,	\
	0xad, 0x19, 0x8f, 0xd8, 0x96, 0x55, 0x22, 0x5f,	\
	0xca, 0x2e, 0xc1, 0xd7, 0xbd, 0xa1, 0x83, 0x66,	\
	0x4d, 0x85, 0xcb, 0x01, 0x60, 0x3f, 0xf7, 0xf7,	\
	0xa3, 0x7a, 0xfa, 0x99, 0xa0, 0x1e, 0x25, 0x90,	\
	0xd0, 0xd0, 0x3b, 0x54, 0x90, 0x77, 0x94, 0xa6,	\
	0x88, 0xea, 0xc3, 0x6b, 0xa0, 0x59, 0x5e, 0x69,	\
	0x89, 0xc9, 0x8d, 0x28, 0x02, 0x78, 0x0b, 0x2b,	\
	0xab, 0x5b, 0x04, 0x2f, 0x78, 0x15, 0x86, 0x2b,	\
	0x0f, 0x63, 0xb2, 0xd7, 0xc9, 0xe9, 0xac, 0x0e,	\
	0xbc, 0x17, 0xe4, 0x19, 0x88, 0xe0, 0xe6, 0x13,	\
	0xf8, 0x15, 0x08, 0xa7, 0xe1, 0x6e, 0x71, 0x5c,	\
	0xef, 0x3e, 0xc1, 0x0f, 0x74, 0xdb, 0xdc, 0x52,	\
	0x9c, 0xfc, 0xe9, 0xa9, 0xf3, 0x0d, 0x52, 0xbc,	\
	0x0c, 0xe8, 0xba, 0xd1, 0x76, 0x46, 0x87, 0xb5,	\
	0x89, 0xc9, 0x8d, 0x28, 0x03, 0x30, 0xe6, 0x9d,	\
	0xa1, 0x2b, 0xa5, 0x9e, 0x3b, 0x86, 0xb3, 0x5f,	\
	0xe3, 0x81, 0xa6, 0x76, 0x32, 0x9d, 0xf9, 0xc5,	\
	0x07, 0x93, 0xb3, 0xdf, 0x64, 0xe2, 0x78, 0x9c,	\
	0x00, 0xc7, 0x86, 0x79, 0xd6, 0x67, 0xa2, 0xfb,	\
	0xf2, 0x8d, 0xea, 0xe9, 0xc8, 0xfc, 0x43, 0xd2,	\
	0x0f, 0x2f, 0x7d, 0x9d, 0xd3, 0x8f, 0x9c, 0xdd,	\
	0xa2, 0x9f, 0x42, 0x76, 0x40, 0xcc, 0x4a, 0xd0,	\
	0x89, 0xc9, 0x8d, 0x28, 0x04, 0xb4, 0x87, 0x18,	\
	0x06, 0xc3, 0xc7, 0x89, 0x98, 0x72, 0xcc, 0x1a,	\
	0xd1, 0xd8, 0x78, 0xb9, 0x75, 0x0b, 0x92, 0xe3,	\
	0xcc, 0xed, 0x38, 0x39, 0x4b, 0xa9, 0xcf, 0x30,	\
	0xd6, 0xb5, 0xa1, 0x3f, 0xfa, 0x4f, 0x29, 0x99,	\
	0xa9, 0x03, 0x77, 0xf6, 0x53, 0xfa, 0xd8, 0x32,	\
	0xce, 0xf4, 0xf6, 0x0a, 0x3c, 0xe8, 0x9c, 0x3d,	\
	0xaa, 0xe0, 0x7b, 0x2c, 0xa5, 0x28, 0xe1, 0xdd,	\
	0x89, 0xc9, 0x8d, 0x28, 0x05, 0x51, 0xbf, 0xe1,	\
	0xd4, 0xf5, 0x5e, 0x38, 0x2c, 0xec, 0xab, 0xdd,	\
	0xb8, 0x5c, 0x13, 0x43, 0x62, 0xc2, 0xb6, 0x02,	\
	0x18, 0xce, 0x9a, 0x62, 0x67, 0x6a, 0xeb, 0x99,	\
	0xf6, 0x2f, 0xf1, 0xf1, 0xec, 0x3e, 0x74, 0xfa,	\
	0xf8, 0x16, 0x43, 0xea, 0x1e, 0xef, 0x5d, 0x37,	\
	0x6c, 0x13, 0xf9, 0x7f, 0x65, 0x09, 0xab, 0x60,	\
	0x38, 0xda, 0x0f, 0xe7, 0xfa, 0x9e, 0x17, 0x10,	\
	0x89, 0xc9, 0x8d, 0x28, 0x06, 0xdc, 0x4c, 0x4d,	\
	0xae, 0x5c, 0xb4, 0x0d, 0x6b, 0x05, 0x6d, 0x25,	\
	0x3f, 0x78, 0x5d, 0xf3, 0x34, 0x33, 0xa4, 0x89,	\
	0x34, 0x0e, 0x88, 0x66, 0x40, 0x57, 0x6b, 0x34,	\
	0x83, 0xfd, 0x39, 0xe7, 0xfb, 0x84, 0x09, 0xb3,	\
	0x16, 0x8f, 0x80, 0xdf, 0x1b, 0xe0, 0x02, 0x4c,	\
	0xde, 0x31, 0x2a, 0x32, 0x58, 0x5b, 0xa3, 0x23,	\
	0x8e, 0x2a, 0xa6, 0xaf, 0x03, 0x19, 0x02, 0x7a,	\
	0x89, 0xc9, 0x8d, 0x28, 0x07, 0xf8, 0xbf, 0xa6,	\
	0xad, 0xf9, 0xd1, 0xdc, 0xbd, 0x6e, 0xb3, 0xc1,	\
	0xfb, 0x65, 0xd8, 0x5f, 0x2e, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#define WIREDATA_CTAP_NFC_INIT				\
	0x55, 0x32, 0x46, 0x5f, 0x56, 0x32, 0x90, 0x00

#define WIREDATA_CTAP_NFC_MSG				\
	0x90, 0x00, 0x90, 0x00, 0x90, 0x00, 0x90, 0x00

#define WIREDATA_CTAP_EXTENDED_APDU			\
	0x00, 0xa4, 0x04, 0x00, 0x00, 0x02, 0x00, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,	\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,	\
	0x00

#endif /* _WIREDATA_FIDO2_H */
