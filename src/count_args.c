/*
 * count_args.c
 */

#include "count_args.h"

/**
 * Counts items contained in argv
 */
int count_args(char** argv) {
    int count = 0;
    while(argv[++count]);
    return count;
}

