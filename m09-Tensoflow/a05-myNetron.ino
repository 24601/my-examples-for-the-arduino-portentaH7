
// This allows only one file for Arduino IDE
// #include "model.h"  // the following should be in it's own tab. 

/////////////////////////////////// cut and paste to model.h tab /////////////////////////////////////////////////////////////////



#pragma once

const unsigned char model_tflite[] = {
  0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x00, 0x00, 0x12, 0x00,
  0x1c, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x14, 0x00,
  0x00, 0x00, 0x18, 0x00, 0x12, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0xf4, 0x02, 0x00, 0x00, 0x3c, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0xa8, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xf4, 0x05, 0x00, 0x00,
  0xf0, 0x05, 0x00, 0x00, 0xe4, 0x04, 0x00, 0x00, 0x64, 0x04, 0x00, 0x00,
  0xb8, 0x03, 0x00, 0x00, 0x34, 0x03, 0x00, 0x00, 0xdc, 0x05, 0x00, 0x00,
  0xd8, 0x05, 0x00, 0x00, 0xd4, 0x05, 0x00, 0x00, 0xd0, 0x05, 0x00, 0x00,
  0x38, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x0c, 0x00, 0x04, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
  0x6d, 0x69, 0x6e, 0x5f, 0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f,
  0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x7a, 0xfb, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x31, 0x2e, 0x31, 0x34,
  0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f, 0x6e,
  0x76, 0x65, 0x72, 0x74, 0x65, 0x64, 0x2e, 0x00, 0x00, 0x00, 0x0e, 0x00,
  0x18, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x14, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
  0x3c, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0xe8, 0x04, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00,
  0xbc, 0x03, 0x00, 0x00, 0x5c, 0x03, 0x00, 0x00, 0xb0, 0x02, 0x00, 0x00,
  0x1c, 0x02, 0x00, 0x00, 0x64, 0x01, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00,
  0x54, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0xb0, 0x01, 0x00, 0x00, 0x14, 0x01, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e,
  0x00, 0x00, 0x00, 0x00, 0x0e, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0xa0, 0xfb, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x49, 0x64, 0x65, 0x6e, 0x74, 0x69, 0x74, 0x79,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x01, 0x00, 0x00, 0x00, 0x80, 0xfb, 0xff, 0xff, 0xde, 0xfe, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x08, 0x18, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x98, 0xfb, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x14, 0xfc, 0xff, 0xff,
  0x14, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31,
  0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x44, 0x65, 0x6e, 0x73, 0x65,
  0x32, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
  0x20, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x04, 0x00,
  0x08, 0x00, 0x0c, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x56, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x0e, 0x01, 0x00, 0x00, 0x00,
  0xa8, 0xfc, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x44,
  0x65, 0x6e, 0x73, 0x65, 0x31, 0x2f, 0x53, 0x69, 0x67, 0x6d, 0x6f, 0x69,
  0x64, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x0a, 0x00, 0x00, 0x00, 0xb4, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x0e, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x10, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xc8, 0xfc, 0xff, 0xff,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0a, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x01, 0x00, 0x00, 0x00,
  0x5c, 0xfd, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x44,
  0x65, 0x6e, 0x73, 0x65, 0x31, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64,
  0x64, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x0a, 0x00, 0x00, 0x00, 0x54, 0xfd, 0xff, 0xff, 0x62, 0xfe, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x79, 0x3d, 0x62, 0xbe,
  0x46, 0xad, 0x0b, 0xc0, 0x7c, 0xe6, 0x91, 0x3f, 0xde, 0x85, 0xad, 0x40,
  0x8a, 0xc3, 0xce, 0xc0, 0x6e, 0x29, 0x72, 0xbf, 0x7b, 0xeb, 0x8d, 0x40,
  0xfe, 0x92, 0x02, 0xbf, 0x23, 0x8d, 0x00, 0x40, 0x2f, 0x79, 0x4b, 0x3f,
  0x5a, 0xfe, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31,
  0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x44, 0x65, 0x6e, 0x73, 0x65,
  0x32, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00, 0x00,
  0xd4, 0xfd, 0xff, 0xff, 0xe2, 0xfe, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x50, 0x00, 0x00, 0x00, 0xc9, 0x10, 0xc4, 0x3e, 0xa9, 0x15, 0xe7, 0xba,
  0x0c, 0x64, 0x2b, 0xbf, 0xf4, 0xba, 0x18, 0x40, 0x32, 0x88, 0x10, 0xbf,
  0xd0, 0xcf, 0x11, 0xbf, 0xef, 0xb5, 0x8b, 0x40, 0xcd, 0x80, 0x8a, 0x40,
  0x6e, 0xef, 0xa7, 0x40, 0x8c, 0xd9, 0x75, 0xc0, 0x5f, 0x96, 0xaf, 0x3e,
  0x51, 0xc4, 0x55, 0x3f, 0x65, 0x19, 0x1f, 0x40, 0x4d, 0xfd, 0x81, 0xc0,
  0xa0, 0xca, 0xb2, 0xbf, 0xbe, 0xd9, 0xa1, 0xbf, 0xef, 0x8d, 0xba, 0x3e,
  0xfa, 0x9a, 0xff, 0xbf, 0x39, 0x14, 0xd7, 0xbe, 0x0f, 0xf8, 0x22, 0xbf,
  0x02, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31,
  0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x44, 0x65, 0x6e, 0x73, 0x65,
  0x31, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00, 0x00,
  0x7c, 0xfe, 0xff, 0xff, 0x8a, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x7e, 0x53, 0x0d, 0xbe, 0x5e, 0xff, 0xff, 0xff,
  0x10, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x50, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x39, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x44,
  0x65, 0x6e, 0x73, 0x65, 0x32, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64,
  0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62,
  0x6c, 0x65, 0x4f, 0x70, 0x2f, 0x72, 0x65, 0x73, 0x6f, 0x75, 0x72, 0x63,
  0x65, 0x00, 0x00, 0x00, 0x04, 0x00, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x7b, 0x48, 0x6c, 0x3d,
  0xfc, 0xfc, 0xd2, 0x3d, 0xf3, 0x3a, 0x56, 0x3e, 0x0a, 0x87, 0x93, 0xbf,
  0xbf, 0x6c, 0xdd, 0x3f, 0xd5, 0x5f, 0x6d, 0xbe, 0xef, 0xbb, 0x8d, 0xbf,
  0x07, 0x9b, 0x23, 0xbf, 0x1e, 0x63, 0x44, 0x3d, 0x56, 0xda, 0xca, 0x3d,
  0x00, 0x00, 0x0e, 0x00, 0x14, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00,
  0x0c, 0x00, 0x10, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31,
  0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x44, 0x65, 0x6e, 0x73, 0x65,
  0x31, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65,
  0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70,
  0x2f, 0x72, 0x65, 0x73, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x00, 0x00, 0x00,
  0x9c, 0xff, 0xff, 0xff, 0x14, 0x00, 0x18, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x44, 0x65,
  0x6e, 0x73, 0x65, 0x31, 0x5f, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00,
  0xfc, 0xff, 0xff, 0xff, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00
};
unsigned int model_tflite_len = 1608;



//////////////////////////////////// end cut and paste to model.h tab ///////////////////////////////////////////////////////////////
#include <TensorFlowLite.h>
#include "Arduino.h"



/*================= Start Really Advanced Area ===============================*/



#include "tensorflow/lite/micro/all_ops_resolver.h"
//#include "tensorflow/lite/micro/kernels/micro_ops.h"
//#include "tensorflow/lite/micro/micro_mutable_op_resolver.h"

#include "tensorflow/lite/micro/micro_error_reporter.h"  // may have issues on M4 core
#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/schema/schema_generated.h"
#include "tensorflow/lite/version.h"
#include "tensorflow/lite/c/common.h"
//#include "tensorflow/lite/c/c_api.h" // has interesting funcitons, not in main library









/*

#ifndef TENSORFLOW_LITE_MICRO_EXAMPLES_HELLO_WORLD_OUTPUT_HANDLER_H_
#define TENSORFLOW_LITE_MICRO_EXAMPLES_HELLO_WORLD_OUTPUT_HANDLER_H_



// Called by the main loop to produce some output based on the x and y values
void HandleOutput(tflite::ErrorReporter* error_reporter, float x_value,
                  float y_value);

#endif  // TENSORFLOW_LITE_MICRO_EXAMPLES_HELLO_WORLD_OUTPUT_HANDLER_H_


*/




#ifndef TENSORFLOW_LITE_MICRO_EXAMPLES_HELLO_WORLD_MAIN_FUNCTIONS_H_
#define TENSORFLOW_LITE_MICRO_EXAMPLES_HELLO_WORLD_MAIN_FUNCTIONS_H_

// Expose a C friendly interface for main functions.
#ifdef __cplusplus
extern "C" {
#endif

// Initializes all data needed for the example. The name is important, and needs
// to be setup() for Arduino compatibility.
void setup();

// Runs one iteration of data gathering and inference. This should be called
// repeatedly from the application code. The name needs to be loop() for Arduino
// compatibility.
void loop();

#ifdef __cplusplus
}
#endif

#endif  // TENSORFLOW_LITE_MICRO_EXAMPLES_HELLO_WORLD_MAIN_FUNCTIONS_H_




/*================= End Really Advanced Area ===============================*/







/*================= Start Advanced Area ===============================*/


// Globals, used for compatibility with Arduino-style sketches.
namespace {
tflite::ErrorReporter* error_reporter = nullptr;
const tflite::Model* model = nullptr;
tflite::MicroInterpreter* interpreter = nullptr;
TfLiteTensor* input = nullptr;
TfLiteTensor* output = nullptr;
int inference_count = 0;

// Create an area of memory to use for input, output, and intermediate arrays.
constexpr int kTensorArenaSize = 2 * 1024;  // I like 20 * 1024;

uint8_t tensor_arena[kTensorArenaSize];
}  // namespace





/*================= End Advanced Area ===============================*/




// This is tuned so that a full cycle takes ~4 seconds on an Arduino MKRZERO.
const int kInferencesPerCycle = 1000;










// The name of this function is important for Arduino compatibility.
void setup() {
  Serial.begin(9600);
  // Set up logging. Google style is to avoid globals or statics because of
  // lifetime uncertainty, but since this has a trivial destructor it's okay.
  // NOLINTNEXTLINE(runtime-global-variables)
  static tflite::MicroErrorReporter micro_error_reporter;
  error_reporter = &micro_error_reporter;

  // Map the model into a usable data structure. This doesn't involve any
  // copying or parsing, it's a very lightweight operation.


  
 // model = tflite::GetModel(g_model);  // name important
  model = tflite::GetModel(model_tflite);  // name from the tflite converter


  
  if (model->version() != TFLITE_SCHEMA_VERSION) {
    TF_LITE_REPORT_ERROR(error_reporter,
                         "Model provided is schema version %d not equal "
                         "to supported version %d.",
                         model->version(), TFLITE_SCHEMA_VERSION);
    return;
  }

  // This pulls in all the operation implementations we need.
  // NOLINTNEXTLINE(runtime-global-variables)
  static tflite::AllOpsResolver resolver;

  // Build an interpreter to run the model with.
  static tflite::MicroInterpreter static_interpreter(
      model, resolver, tensor_arena, kTensorArenaSize, error_reporter);
  interpreter = &static_interpreter;

  // Allocate memory from the tensor_arena for the model's tensors.
  TfLiteStatus allocate_status = interpreter->AllocateTensors();
  if (allocate_status != kTfLiteOk) {
    TF_LITE_REPORT_ERROR(error_reporter, "AllocateTensors() failed");
    return;
  }

  // Obtain pointers to the model's input and output tensors.
  input = interpreter->input(0);
  output = interpreter->output(0);

  // Keep track of how many inferences we have performed.
  inference_count = 0;
}


// helper function to convert tensor type integer to a string
String myTypeIntToString(int myType){
  
  String myTensorType = "Not Set";    
   if (myType == 0){myTensorType  = "kTfLiteNoType"; }  
   if (myType == 1){myTensorType  = "kTfLiteFloat32"; }  
   if (myType == 2){myTensorType  = "kTfLiteInt32"; }   
   if (myType == 3){myTensorType  = "kTfLiteUInt8"; }   
   if (myType == 4){myTensorType  = "kTfLiteInt64"; }   
   if (myType == 5){myTensorType  = "kTfLiteString"; }  
   if (myType == 6){myTensorType  = "kTfLiteBool"; }    
   if (myType == 7){myTensorType  = "kTfLiteInt16"; }    
   if (myType == 8){myTensorType  = "kTfLiteComplex64"; }    
   if (myType == 9){myTensorType  = "kTfLiteInt8"; }    
   if (myType == 10){myTensorType = "kTfLiteFloat16"; }    
   if (myType == 11){myTensorType = "kTfLiteFloat64"; }   
   if (myType == 12){myTensorType = "kTfLiteComplex128"; }  
   return myTensorType;
  
}




// The name of this function is important for Arduino compatibility.
void loop() {
   
   Serial.println("  constexpr int kTensorArenaSize: " + String(kTensorArenaSize) );
   Serial.println(" interpreter->arena_used_bytes(): " + String(interpreter->arena_used_bytes()) );
  
   Serial.println("       interpreter.inputs_size(): " + String(interpreter->inputs_size()) );
   Serial.println("       interpreter.outputs_size(): " + String(interpreter->outputs_size()) );
   Serial.println("       interpreter.tensors_size(): " + String(interpreter->tensors_size()) );
   
   Serial.println();
   Serial.println("                     input->type: " + String(input->type) + " = " + myTypeIntToString(input->type));
   Serial.println("               input->dims->size: " + String(input->dims->size) );
   int mySize = input->dims->size;
  
   for (int i = 0; i < mySize; i++) {
     int myIn = input->dims->data[i]; 
     Serial.println( "            input->dims->data[" + String(i) + "]: " + String(myIn) );
       
   }

   Serial.println(  );
   Serial.println("-----------------------------------------------------------" );

  int myTotalBytes = 0;
  for (size_t tensor_index = 0; tensor_index < interpreter->tensors_size(); tensor_index++) {
    TfLiteTensor* tensor = interpreter->tensor(static_cast<int>(tensor_index));
    Serial.print("Layer index: " + String(tensor_index) );
    Serial.print(",  Type: " + String(tensor->type)+ ": "+ myTypeIntToString(tensor->type) );
    Serial.print(",  # Nodes: " + String(tensor->dims->size) );
    Serial.println(",  Size in Bytes: " + String(tensor->bytes) );
    myTotalBytes += tensor->bytes; 
    Serial.print("-----tensor->dims->data[k]" );
    
    for (int k = 0; k < tensor->dims->size; k++) {
       Serial.print(",    data[" + String(k) + "]:" + String(tensor->dims->data[k]));
    }
    Serial.println( );    
    Serial.println( );
 }

   Serial.println("-----------------------------------------------------------" );

  
   
   Serial.println("                     output->type: " + String(output->type) + " = " + myTypeIntToString(output->type));
   Serial.println("               output->dims->size: " + String(output->dims->size) );
   
   int mySize2 = output->dims->size;
   for (int i = 0; i < mySize2; i++) {
     int myOut = output->dims->data[i];      
     Serial.println( "            output->dims->data[" + String(i) + "]: " + String(myOut) );
   }

   Serial.println("              Total Added Bytes: " + String(myTotalBytes) );
   Serial.println("-----------------------------------------------------------" );
   Serial.println("-----------------------------------------------------------" );  
   Serial.println();
  



  // Output the results. A custom HandleOutput function can be implemented
  // for each supported hardware target.
  //HandleOutput(error_reporter, x_val, y_val);

  // Increment the inference_counter, and reset it if we have reached
  // the total number per cycle
  inference_count += 1;
  if (inference_count >= kInferencesPerCycle) inference_count = 0;

  //TfLiteTensor* input = interpreter.input(0);




  delay(3000);
  
}