// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once

#include <windows.h>
#include <stdint.h>


#pragma warning(disable:4635) // disable warnings about badly formed documentation from FFmpeg, which don't need at all
#pragma warning(disable:4244) // disable warning about conversion int64 to int32

extern "C"
{
#include <libavutil/timestamp.h>

#include <libavutil/opt.h>
#include <libavutil/mathematics.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>
#include <libswresample/swresample.h>
}

#pragma warning(default:4635)
#pragma warning(default:4244)

