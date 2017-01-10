#include "stdio.h"
#include "set.h"
#include "set.c"

void main (int argc, char *argv){
	int i = 0;
	char *c;
	c = malloc(strlen(argc));
	if(args == 1){
		return 0;
	}

	for (i = 1; i < argc; i ++){
		 
		switch(*argv[i]){
_			case 'read_set':
				read_set(*argv);
				
		} 
	}
}
