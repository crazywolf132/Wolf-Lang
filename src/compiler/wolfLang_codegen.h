//
//  wolfLang_codegen.h
//  gravity
//
//  Created by Marco Bambini on 09/10/14.
//  Copyright (c) 2014 CreoLabs. All rights reserved.
//

#ifndef __WOLFLANG_CODEGEN__
#define __WOLFLANG_CODEGEN__

#include "wolfLang_ast.h"
#include "wolfLang_value.h"
#include "wolfLang_delegate.h"

gravity_function_t *gravity_codegen(gnode_t *node, gravity_delegate_t *delegate, gravity_vm *vm);

#endif
