#include "octave/config.h"
#include "octave.h"
#include "symtab.h"
#include "parse.h"
#include "unwind-prot.h"
#include "toplev.h"
#include "error.h" 
#include "variables.h"
#include "sighandlers.h"
#include "sysdep.h"
#include "ov-struct.h"

/* define Ruby 1.8 compatible versions of Ruby 1.9 accessor macros */
#ifndef RUBY_19
#ifndef RFLOAT_VALUE
#define RFLOAT_VALUE(v) (RFLOAT(v)->value)
#endif
#ifndef RARRAY_LEN
#define RARRAY_LEN(v) (RARRAY(v)->len)
#endif
#ifndef RARRAY_PTR
#define RARRAY_PTR(v) (RARRAY(v)->ptr)
#endif
#ifndef RSTRING_PTR
#define RSTRING_PTR(V) (RSTRING(v)->ptr)
#endif
#endif

