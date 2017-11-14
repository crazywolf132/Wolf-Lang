//
//  wolfLang_debug.h
//  gravity
//
//  Created by Marco Bambini on 01/04/16.
//  Copyright © 2016 CreoLabs. All rights reserved.
//

#ifndef __WOLFLANG_DEBUG__
#define __WOLFLANG_DEBUG__

#include "wolfLang_opcodes.h"

const char *opcode_constname (int n);
const char *opcode_name (opcode_t op);
const char *gravity_disassemble (const char *bcode, uint32_t blen, bool deserialize);

#endif
