//
//  wolfLang_math.h
//  gravity
//
//  Created by Marco Bambini on 14/08/2017.
//  Copyright © 2017 CreoLabs. All rights reserved.
//

#ifndef __WOLFLANG_MATH__
#define __WOLFLANG_MATH__

#include "wolfLang_value.h"

void gravity_math_register (gravity_vm *vm);
void gravity_math_free (void);
bool gravity_ismath_class (gravity_class_t *c);
const char *gravity_math_name (void);

#endif
