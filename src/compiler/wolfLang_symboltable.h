//
//  wolfLang_symboltable.h
//  gravity
//
//  Created by Marco Bambini on 12/09/14.
//  Copyright (c) 2014 CreoLabs. All rights reserved.
//

#ifndef __WOLFLANG_SYMTABLE__
#define __WOLFLANG_SYMTABLE__

#include "debug_macros.h"
#include "wolfLang_ast.h"

#ifndef GRAVITY_SYMBOLTABLE_DEFINED
#define GRAVITY_SYMBOLTABLE_DEFINED
typedef struct symboltable_t	symboltable_t;
#endif

symboltable_t	*symboltable_create (bool is_enum);
gnode_t			*symboltable_lookup (symboltable_t *table, const char *identifier);
gnode_t			*symboltable_global_lookup (symboltable_t *table, const char *identifier);
bool			symboltable_insert (symboltable_t *table, const char *identifier, gnode_t *node);
uint32_t		symboltable_count (symboltable_t *table, uint32_t index);

void			symboltable_enter_scope (symboltable_t *table);
uint32_t		symboltable_exit_scope (symboltable_t *table, uint32_t *nlevel);
uint32_t		symboltable_local_index (symboltable_t *table);
void			symboltable_free (symboltable_t *table);
void			symboltable_dump (symboltable_t *table);

void            *symboltable_hash_atindex (symboltable_t *table, size_t n);

#endif
