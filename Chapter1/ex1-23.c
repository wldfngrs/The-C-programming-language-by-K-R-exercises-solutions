/* C Program to remove all comments from a C Program. */

#include <stdio.h>
#define MAXCOUNT 10000

void removeComments(char output[], char input[]);
void copy(char to[], char from[]);

int main() {
	char textIn[MAXCOUNT];
	char textOut[MAXCOUNT];
	
	removeComments(textOut, textIn);
	
	printf("\n--UNCOMMENTED CODE--\n");
	
	printf("%s", textOut);
}

void removeComments(char output[], char input[]){
	int i, c;
	for (i = 0; i < MAXCOUNT && (c = getchar()) != EOF; i++) {
		input[i] = c;
	}
	input[i] = '\0';
	
	copy(output, input);
}

void copy(char to[], char from[]) {
	int i = 0;
	int j = 0;
	
	while (from[i] != '\0') {
		if (from[i] == '/' && from[i+1] == '*') {
			i+=2;
			do{
				i++;
			} while (from[i] != '*' && from[i+1] != '/');
			i+=2;
		}
		
		to[j] = from[i];
		j++;
		i++;
	}
}
