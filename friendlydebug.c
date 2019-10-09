/*
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

// Standard library already has all necessary include guards
#include <stdio.h>
#include <string.h>
#include "friendlydebug.h"

#ifndef FDBG_MAX_NAME_LENGTH
#define FDBG_MAX_NAME_LENGTH 64
#define FDBG_DEFAULT_NAME "Coder"
static char __fdbg_name[FDBG_MAX_NAME_LENGTH] = FDBG_DEFAULT_NAME;

static char * __fdbg_messages[] = { \
     "Keep it up",
     "You've got this",
     "I believe in you",
     "Don't stop now",
     "A journey of a thousand miles ... ",
     "... begins with the first step",
     "Soon, your genius will be recognized",
     "Success is the best revenge",
     "Lookin' good",
     "Keep on truckin'",
     "Don't forget how great you are",
     "You're gonna be the very best",
     "... like no one ever was",
     "You'll always be the best at being you",
     "There are people who care about you",
     "Where there's a will, there's a way",
     "Look how far you've come already",
     "Mama didn't raise her no quitter",
     "I know you can do this",
     "Let's squash this bug",
     "You're on fire",
     "If at first you don't succeed ... ",
     "... try, try again",
     "DO IT! JUST DO IT!"};
//   |----------------------------------------| 40 chars, max length

#endif

extern char * fdbg_nextmessage() {
    static int message_index = 0;
    message_index++;
    if (message_index >= FDBG_NUMMESSAGES)
        message_index = 0;
    return __fdbg_messages[message_index];
}

extern char * fdbg_getname() {
    return __fdbg_name;
}

extern void fdbg_setname(char * name) {
    if (name == NULL || name[0] == '\0') {
        strcpy(__fdbg_name, FDBG_DEFAULT_NAME);
        return;
    } else {
        strncpy(__fdbg_name, name, FDBG_MAX_NAME_LENGTH);
    }
}

extern int fdbg_message_size() {
    return (int)sizeof(__fdbg_messages);
}
