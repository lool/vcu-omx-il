/******************************************************************************
*
* Copyright (C) 2016-2020 Allegro DVT2.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* Use of the Software is limited solely to applications:
* (a) running on a Xilinx device, or
* (b) that interact with a Xilinx device through a bus or interconnect.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX OR ALLEGRO DVT2 BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of  Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
*
* Except as contained in this notice, the name of Allegro DVT2 shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Allegro DVT2.
*
******************************************************************************/

#pragma once

enum class CompressionType
{
  COMPRESSION_UNUSED,
  COMPRESSION_HEVC,
  COMPRESSION_AVC,
  COMPRESSION_VP9,
  COMPRESSION_JPEG,
  COMPRESSION_MAX_ENUM,
};

enum class ColorType
{
  COLOR_400,
  COLOR_420,
  COLOR_422,
  COLOR_444,
  COLOR_MAX_ENUM,
};

enum class AVCProfileType
{
  AVC_PROFILE_BASELINE,
  AVC_PROFILE_CONSTRAINED_BASELINE,
  AVC_PROFILE_MAIN,
  AVC_PROFILE_EXTENDED,
  AVC_PROFILE_HIGH,
  AVC_PROFILE_PROGRESSIVE_HIGH,
  AVC_PROFILE_CONSTRAINED_HIGH,
  AVC_PROFILE_HIGH_10,
  AVC_PROFILE_HIGH_422,
  AVC_PROFILE_HIGH_444_PREDICTIVE,
  AVC_PROFILE_HIGH_10_INTRA,
  AVC_PROFILE_HIGH_422_INTRA,
  AVC_PROFILE_HIGH_444_INTRA,
  AVC_PROFILE_CAVLC_444_INTRA,
  XAVC_PROFILE_HIGH10_INTRA_CBG,
  XAVC_PROFILE_HIGH10_INTRA_VBR,
  XAVC_PROFILE_HIGH_422_INTRA_CBG,
  XAVC_PROFILE_HIGH_422_INTRA_VBR,
  XAVC_PROFILE_LONG_GOP_MAIN_MP4,
  XAVC_PROFILE_LONG_GOP_HIGH_MP4,
  XAVC_PROFILE_LONG_GOP_HIGH_MXF,
  XAVC_PROFILE_LONG_GOP_HIGH_422_MXF,
  AVC_PROFILE_MAX_ENUM,
};

enum class HEVCProfileType
{
  HEVC_PROFILE_MONOCHROME,
  HEVC_PROFILE_MONOCHROME_10,
  HEVC_PROFILE_MONOCHROME_12,
  HEVC_PROFILE_MONOCHROME_16,
  HEVC_PROFILE_MAIN,
  HEVC_PROFILE_MAIN_10,
  HEVC_PROFILE_MAIN_12,
  HEVC_PROFILE_MAIN_16,
  HEVC_PROFILE_MAIN_422,
  HEVC_PROFILE_MAIN_422_10,
  HEVC_PROFILE_MAIN_422_12,
  HEVC_PROFILE_MAIN_422_16,
  HEVC_PROFILE_MAIN_444,
  HEVC_PROFILE_MAIN_444_10,
  HEVC_PROFILE_MAIN_444_12,
  HEVC_PROFILE_MAIN_444_16,
  HEVC_PROFILE_MAIN_STILL,
  HEVC_PROFILE_MAIN_INTRA,
  HEVC_PROFILE_MAIN_10_INTRA,
  HEVC_PROFILE_MAIN_12_INTRA,
  HEVC_PROFILE_MAIN_16_INTRA,
  HEVC_PROFILE_MAIN_422_INTRA,
  HEVC_PROFILE_MAIN_422_10_INTRA,
  HEVC_PROFILE_MAIN_422_12_INTRA,
  HEVC_PROFILE_MAIN_422_16_INTRA,
  HEVC_PROFILE_MAIN_444_INTRA,
  HEVC_PROFILE_MAIN_444_10_INTRA,
  HEVC_PROFILE_MAIN_444_12_INTRA,
  HEVC_PROFILE_MAIN_444_16_INTRA,
  HEVC_PROFILE_MAIN_444_STILL,
  HEVC_PROFILE_MAIN_444_16_STILL,
  HEVC_PROFILE_HIGH_THROUGHPUT_444_16_INTRA,
  HEVC_PROFILE_MONOCHROME_HIGH_TIER,
  HEVC_PROFILE_MONOCHROME_10_HIGH_TIER,
  HEVC_PROFILE_MONOCHROME_12_HIGH_TIER,
  HEVC_PROFILE_MONOCHROME_16_HIGH_TIER,
  HEVC_PROFILE_MAIN_HIGH_TIER,
  HEVC_PROFILE_MAIN_10_HIGH_TIER,
  HEVC_PROFILE_MAIN_12_HIGH_TIER,
  HEVC_PROFILE_MAIN_16_HIGH_TIER,
  HEVC_PROFILE_MAIN_422_HIGH_TIER,
  HEVC_PROFILE_MAIN_422_10_HIGH_TIER,
  HEVC_PROFILE_MAIN_422_12_HIGH_TIER,
  HEVC_PROFILE_MAIN_422_16_HIGH_TIER,
  HEVC_PROFILE_MAIN_444_HIGH_TIER,
  HEVC_PROFILE_MAIN_444_10_HIGH_TIER,
  HEVC_PROFILE_MAIN_444_12_HIGH_TIER,
  HEVC_PROFILE_MAIN_444_16_HIGH_TIER,
  HEVC_PROFILE_MAIN_STILL_HIGH_TIER,
  HEVC_PROFILE_MAIN_INTRA_HIGH_TIER,
  HEVC_PROFILE_MAIN_10_INTRA_HIGH_TIER,
  HEVC_PROFILE_MAIN_12_INTRA_HIGH_TIER,
  HEVC_PROFILE_MAIN_16_INTRA_HIGH_TIER,
  HEVC_PROFILE_MAIN_422_INTRA_HIGH_TIER,
  HEVC_PROFILE_MAIN_422_10_INTRA_HIGH_TIER,
  HEVC_PROFILE_MAIN_422_12_INTRA_HIGH_TIER,
  HEVC_PROFILE_MAIN_422_16_INTRA_HIGH_TIER,
  HEVC_PROFILE_MAIN_444_INTRA_HIGH_TIER,
  HEVC_PROFILE_MAIN_444_10_INTRA_HIGH_TIER,
  HEVC_PROFILE_MAIN_444_12_INTRA_HIGH_TIER,
  HEVC_PROFILE_MAIN_444_16_INTRA_HIGH_TIER,
  HEVC_PROFILE_MAIN_444_STILL_HIGH_TIER,
  HEVC_PROFILE_MAIN_444_16_STILL_HIGH_TIER,
  HEVC_PROFILE_HIGH_THROUGHPUT_444_16_INTRA_HIGH_TIER,
  HEVC_PROFILE_MAX_ENUM,
};

enum class VP9ProfileType
{
  VP9_PROFILE_MAX_ENUM,
};

enum class JPEGProfileType
{
  JPEG_PROFILE_MAX_ENUM,
};

union ProfileType
{
  AVCProfileType avc;
  HEVCProfileType hevc;
  VP9ProfileType vp9;
  JPEGProfileType jpeg;
};

enum class RateControlType
{
  RATE_CONTROL_CONSTANT_QUANTIZATION,
  RATE_CONTROL_VARIABLE_BITRATE,
  RATE_CONTROL_VARIABLE_CAPPED_BITRATE,
  RATE_CONTROL_CONSTANT_BITRATE,
  RATE_CONTROL_LOW_LATENCY,
  RATE_CONTROL_PLUGIN,
  RATE_CONTROL_MAX_ENUM,
};

enum class AspectRatioType
{
  ASPECT_RATIO_NONE,
  ASPECT_RATIO_4_3,
  ASPECT_RATIO_16_9,
  ASPECT_RATIO_AUTO,
  ASPECT_RATIO_MAX_ENUM,
};

enum class GopControlType
{
  GOP_CONTROL_DEFAULT,
  GOP_CONTROL_DEFAULT_B,
  GOP_CONTROL_PYRAMIDAL,
  GOP_CONTROL_PYRAMIDAL_B,
  GOP_CONTROL_ADAPTIVE,
  GOP_CONTROL_LOW_DELAY_P,
  GOP_CONTROL_LOW_DELAY_B,
  GOP_CONTROL_MAX_ENUM,
};

enum class GdrType
{
  GDR_OFF,
  GDR_VERTICAL,
  GDR_HORTIZONTAL,
  GDR_MAX_ENUM,
};

enum class QPControlType
{
  QP_CONTROL_NONE,
  QP_CONTROL_AUTO,
  QP_CONTROL_ADAPTIVE_AUTO,
  QP_CONTROL_MAX_ENUM,
};

enum class QPTableType
{
  QP_TABLE_NONE,
  QP_TABLE_ABSOLUTE,
  QP_TABLE_RELATIVE,
  QP_TABLE_MAX_ENUM,
};

enum class ScalingListType
{
  SCALING_LIST_DEFAULT,
  SCALING_LIST_FLAT,
  SCALING_LIST_MAX_ENUM,
};

enum class DecodedPictureBufferType
{
  DECODED_PICTURE_BUFFER_NORMAL,
  DECODED_PICTURE_BUFFER_NO_REORDERING,
  DECODED_PICTURE_BUFFER_MAX_ENUM,
};

enum class DecodeUnitType
{
  DECODE_UNIT_FRAME, // ACCESS UNIT
  DECODE_UNIT_SLICE, // VCL NAL
  DECODE_UNIT_MAX_ENUM,
};

enum class EntropyCodingType
{
  ENTROPY_CODING_CABAC,
  ENTROPY_CODING_CAVLC,
  ENTROPY_CODING_MAX_ENUM,
};

enum class LoopFilterType
{
  LOOP_FILTER_DISABLE,
  LOOP_FILTER_ENABLE,
  LOOP_FILTER_ENABLE_CROSS_TILE,
  LOOP_FILTER_ENABLE_CROSS_SLICE,
  LOOP_FILTER_ENABLE_CROSS_TILE_AND_SLICE,
  LOOP_FILTER_MAX_ENUM,
};

enum class BufferModeType
{
  BUFFER_MODE_FRAME,
  BUFFER_MODE_FRAME_NO_REORDERING,
  BUFFER_MODE_SLICE,
  BUFFER_MODE_MAX_ENUM,
};

enum class BufferHandleType
{
  BUFFER_HANDLE_CHAR_PTR,
  BUFFER_HANDLE_FD,
  BUFFER_HANDLE_MAX_ENUM,
};

enum class QualityType
{
  REGION_OF_INTEREST_QUALITY_HIGH,
  REGION_OF_INTEREST_QUALITY_MEDIUM,
  REGION_OF_INTEREST_QUALITY_LOW,
  REGION_OF_INTEREST_QUALITY_DONT_CARE,
  REGION_OF_INTEREST_QUALITY_INTRA,
  REGION_OF_INTEREST_QUALITY_MAX_ENUM,
};

enum class VideoModeType
{
  VIDEO_MODE_PROGRESSIVE,
  VIDEO_MODE_ALTERNATE_TOP_BOTTOM_FIELD, // Top field first
  VIDEO_MODE_ALTERNATE_BOTTOM_TOP_FIELD, // Bottom field first
  VIDEO_MODE_MAX_ENUM,
};

enum class SequencePictureModeType
{
  SEQUENCE_PICTURE_MODE_UNKNOWN,
  SEQUENCE_PICTURE_MODE_FRAME,
  SEQUENCE_PICTURE_MODE_FIELD,
  SEQUENCE_PICTURE_MODE_FRAME_AND_FIELD,
  SEQUENCE_PICTURE_MODE_MAX_ENUM,
};

enum class ColorPrimariesType
{
  COLOR_PRIMARIES_UNSPECIFIED,
  COLOR_PRIMARIES_RESERVED,
  COLOR_PRIMARIES_BT_470_NTSC,
  COLOR_PRIMARIES_BT_601_PAL,
  COLOR_PRIMARIES_BT_601_NTSC,
  COLOR_PRIMARIES_BT_709,
  COLOR_PRIMARIES_BT_2020,
  COLOR_PRIMARIES_SMPTE_240M,
  COLOR_PRIMARIES_SMPTE_ST_428,
  COLOR_PRIMARIES_SMPTE_RP_431,
  COLOR_PRIMARIES_SMPTE_EG_432,
  COLOR_PRIMARIES_EBU_3213,
  COLOR_PRIMARIES_GENERIC_FILM,
  COLOR_PRIMARIES_MAX_ENUM,
};

enum class TransferCharacteristicsType
{
  TRANSFER_CHARACTERISTICS_UNSPECIFIED,
  TRANSFER_CHARACTERISTICS_BT_2100_PQ,
  TRANSFER_CHARACTERISTICS_MAX_ENUM,
};

enum class ColourMatrixType
{
  COLOUR_MATRIX_UNSPECIFIED,
  COLOUR_MATRIX_BT_2100_YCBCR,
  COLOUR_MATRIX_MAX_ENUM,
};
