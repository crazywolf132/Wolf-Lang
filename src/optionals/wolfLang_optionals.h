//
//  wolfLang_optionals.h
//  gravity
//
//  Created by Marco Bambini on 14/08/2017.
//  Copyright © 2017 CreoLabs. All rights reserved.
//

#ifndef __WOLFLANG_OPTIONALS__
#define __WOLFLANG_OPTIONALS__

#ifndef WOLFLANG_INCLUDE_MATH
#define WOLFLANG_INCLUDE_MATH
#endif

#ifdef WOLFLANG_INCLUDE_MATH
#define WOLFLANG_MATH_REGISTER(_vm)          gravity_math_register(_vm)
#define WOLFLANG_MATH_FREE()                 gravity_math_free()
#define WOLFLANG_MATH_NAME()                 gravity_math_name()
#define WOLFLANG_ISMATH_CLASS(_c)            gravity_ismath_class(_c)
#include "wolfLang_math.h"
#else
#define WOLFLANG_MATH_REGISTER(_vm)
#define WOLFLANG_MATH_FREE()
#define WOLFLANG_MATH_NAME()                 NULL
#define WOLFLANG_ISMATH_CLASS(_c)            false
#endif

#endif
