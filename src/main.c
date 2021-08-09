#include <stdio.h>
#include <stdlib.h>
#include "count_args.h"
#include "list_args.h"

int main(int argc, char** argv) {
    printf("args-echo - counts and echos command line arguments\n");
    printf("usage: args-echo argument1 argument2... argumentN\n");
    printf("sample usage: args-echo Hello World!\n");
    
    int count = count_args(argv);
    printf("Total arguments: %d\n", count);
    
	char* seq = list_args(argc, argv);
	if(NULL != seq) {
	    printf("%s", seq);
		free(seq);
	}
	
	return 0;
}

