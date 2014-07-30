/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2014 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 */

#ifndef POLY_DEBUGGING_H_
#define POLY_DEBUGGING_H_

#include <cstdint>

#include <poly/config.h>

namespace poly {
namespace debugging {

// Returns true if a debugger is attached to this process.
// The state may change at any time (attach after launch, etc), so do not
// cache this value. Determining if the debugger is attached is expensive,
// though, so avoid calling it frequently.
bool IsDebuggerAttached();

}  // namespace debugging
}  // namespace poly

#endif  // POLY_DEBUGGING_H_
