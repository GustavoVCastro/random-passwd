#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pass-gen.h"

int main(int argc, char **argv)
{
	int passSize, passQty = 1;

	if (argc < 2) {
		printf("Error: Too little arguments\n");
		return 0;
	}

	else {
		if (argc > 3) {
			printf("Error: Too many arguments\n");
			return 0;
		}
		else {
			passSize = atoi(argv[1]);
			char *generatedPasswd;
			generatedPasswd= malloc(passSize*sizeof(char));
			
			if (argc == 2)
				passGenerate(generatedPasswd, passSize, passQty);
			else {
				passQty = atoi(argv[2]);
				passGenerate(generatedPasswd, passSize, passQty);
			}		

		free(generatedPasswd);
		return 0;
		}
	}
}
