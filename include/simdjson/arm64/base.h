#ifndef SIMDJSON_ARM64_BASE_H
#define SIMDJSON_ARM64_BASE_H

#include "simdjson/base.h"

namespace simdjson {
/**
 * Implementation for NEON (ARMv8).
 */
namespace arm64 {

class implementation;

namespace {
namespace simd {
template <typename T> struct simd8;
template <typename T> struct simd8x64;
} // namespace simd
} // unnamed namespace

} // namespace arm64
} // namespace simdjson

#ifdef SIMDJSON_IN_EDITOR_IMPL
// If we're editing one of the files in this directory, begin the implementation!
#ifndef SIMDJSON_IMPLEMENTATION
#include "simdjson/arm64/begin.h"
#endif
#endif // SIMDJSON_IN_EDITOR_IMPL

#endif // SIMDJSON_ARM64_BASE_H
