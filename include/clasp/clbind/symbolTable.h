/*
    File: symbolTable.h
*/

/*
Copyright (c) 2014, Christian E. Schafmeister
 
CLASP is free software; you can redistribute it and/or
modify it under the terms of the GNU Library General Public
License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.
 
See directory 'clasp/licenses' for full details.
 
The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
/* -^- */
#ifndef _clbind_symbolTable_H
#define _clbind_symbolTable_H

#include <clasp/core/foundation.h>

namespace kw {
#define KeywordPkg_SYMBOLS
#define DO_SYMBOL(cname, idx, pkg, lispname, export) extern core::Symbol_sp cname;
#include SYMBOLS_SCRAPED_INC_H
#undef DO_SYMBOL
#undef KeywordPkg_SYMBOLS
}; /* kw package */

namespace clbind {
#define ClbindPkg_SYMBOLS
#define DO_SYMBOL(cname, idx, pkg, lispname, export) extern core::Symbol_sp cname;
#include SYMBOLS_SCRAPED_INC_H
#undef DO_SYMBOL
#undef ClbindPkg_SYMBOLS
}; /* clbind package */

#endif /* _clbind_symbolTable_H */
