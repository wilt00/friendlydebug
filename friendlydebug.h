/**
 * FriendlyDebug
 * Version 1.0.0
 * 2017-11-07
 * 
 * Copyright (c) Will Toher
 * All rights reserved.
 *
 * MIT License
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this
 * software and associated documentation files (the "Software"), to deal in the Software 
 * without restriction, including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons
 * to whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
 * PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
 * FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include <stdio.h>

#ifndef FDBG_MACROS
#define FDBG_NUMMESSAGES 27

/* Function: fdbg_info()
 * Print the line number, function name, and file name of the location from
 *   which it was called to standard error
 */
#define fdbg_info() { \
    fprintf(stderr, "DEBUG: At line %d, function %s, file %s\n", __LINE__, __func__, __FILE__); \
}

/* Function: fdbg_message()
 * Print an encouraging message to standard error
 */
#define fdbg_message() { \
    fprintf(stderr, "DEBUG: (At line %d, func %s) %s!\n", __LINE__, __func__, fdbg_nextmessage()); \
}

/* Function: fdbg_personal()
 * Print a personalized encouraging message to standard error
 */
#define fdbg_personal() {\
    fprintf(stderr, "DEBUG: (At line %d, func %s) %s, %s!\n", __LINE__, __func__, fdbg_nextmessage(), fdbg_getname()); \
}

#define FDBG_MACROS
#endif

/* Function: fdbg_nextmessage()
 * Returns the next encouraging message in the array
 */
extern char * fdbg_nextmessage();

/* Function: fdgb_getname()
 * Returns the user's previously set name (default: "Coder")
 */
extern char * fdbg_getname();

/* Function: fdbg_setname(char * name)
 * Set the user's name for use in messages
 */
extern void fdbg_setname(char * name);

/* Documentation of __LINE__ etc: */
/* https://www.lemoda.net/c/line-file-func/ */

/* Function: fdbg_message_size()
 * Returns the memory size of message array
 */
extern int fdbg_message_size();
