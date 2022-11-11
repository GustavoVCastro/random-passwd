#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 200

/* Return randomly a number that corresponds to which string will be selected */
int randomize()
{
	return rand () % 4;
}

void passGenerate(char *generatedPasswd, const int passSize, const int passQty)
{
	srand((unsigned int)time(NULL));
	
	int i, j;
	const char numbers[] = "0123456789";
	const char letters[] = "abcdefghijklmnopqrstuvwxyz";
	const char LETTERS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const char symbols[] = "'!@#$%&*()[]{}|/~^-_<>?;:,.=+`\"";

	int randomType = randomize();
	
	for (i = 0; i < passQty; i++) {
		for (j = 0; j < passSize; j++) {
			if (randomType == 1) 
				generatedPasswd[j] = numbers[rand() % 10];
			else if (randomType == 2)
				generatedPasswd[j] = letters[rand() % 26];
			else if (randomType == 3)
				generatedPasswd[j] = LETTERS[rand() % 26];
			else
				generatedPasswd[j] = symbols[rand() % 31];

			randomType = randomize();
		}
		
		printf("%s\n", generatedPasswd);
	}
}
