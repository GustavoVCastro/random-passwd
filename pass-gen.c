#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 200

int randomizer()
{
	return rand () % 4;
}

void passGenerate(char *generatedPasswd, int passSize, int passQty)
{
	srand((unsigned int)time(NULL));
	
	int i, j;
	char numbers[] = "0123456789";
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTERS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$%&*()[]{}/";

	int randomType = rand() % 4;
	
	for (i = 0; i < passQty; i++) {
		for (j = 0; j < passSize; j++) {
			if (randomType == 1) 
				generatedPasswd[j] = numbers[rand() % 10];
			else if (randomType == 2)
				generatedPasswd[j] = letters[rand() % 26];
			else if (randomType == 3)
				generatedPasswd[j] = LETTERS[rand() % 26];
			else
				generatedPasswd[j] = symbols[rand() % 14];

			randomType = randomizer();
		}
		
		printf("%s\n", generatedPasswd);
	}
}
