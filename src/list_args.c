/*
 * functions.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "count_args.h"

/**
 * calculates a safe buffer size to allocate the char buffer that
 * holds the list of arguments.
 */
size_t guess_safe_length(char** argv) {
    size_t ret = 0;
    int count = 0;
    while(*(++argv)) {
        ++count;
        ret += strlen(*argv);
    }
    return ret;
}

/**
 * Lists all arguments from argv into a char buffer. The returned pointer
 * must be free'd() before leaving the program.
 */
char* list_args(int argc, char** argv) {
    size_t len = guess_safe_length(argv);
    char* ret = malloc(len);
    for(int i=0; i < argc; i++) {
        char tmp[512];
        sprintf(tmp, "Argument %d: %s\n", i, argv[i]);
        strcat(ret, tmp);
    }
    return ret;
}

