#include <assert.h>
#include <stdio.h>
#include "./friendlydebug.h"
#include "./friendlydebug.c"

int main(/*int argc, char **argv*/) {

    // Test For message with index of 1 to 3
    fdbg_message();
    fdbg_message();
    fdbg_message();

    // Test messages length
    float msg_len = (float)sizeof(__fdbg_messages) / (float)sizeof(char *);
    printf("===========\n");
    printf("array memory size: %d\n", sizeof(__fdbg_messages));
    printf("sizeof char*: %d\n", sizeof(char *));
    printf("defined length: %d\n", FDBG_NUMMESSAGES);
    printf("array length: %0.1f\n", msg_len);

    // Assert of Array length
    assert((int)FDBG_NUMMESSAGES == (int)msg_len);
    printf("===========\n");

    return 0;
}
