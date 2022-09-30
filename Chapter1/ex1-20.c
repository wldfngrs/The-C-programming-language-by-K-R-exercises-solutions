/* C Program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assuming a fixed set of tab stops */

#include <stdio.h>
#define MAXCOUNT 1000

void detab(char output[], char input[]);
void copy(char to[], char from[]);

int main(){
	char textIn[MAXCOUNT];
	char textOut[MAXCOUNT];
	
	detab(textOut, textIn);
	
	printf("%s", textOut);
	
}

void detab(char output[], char input[]) {
	int c, i;
	for (i = 0; i < MAXCOUNT && (c = getchar())!=EOF; i++) {
		input[i] = c;
	}
	input[i] = '\0';
	
	copy(output, input);
}

void copy(char to[], char from[]) {
	int i, j;
	int tabstop = 4;
	
	i = 0;
	j = 0;
	while (from[i] != '\0') {
		if (from[i] == '\t') {
			while(tabstop--) {
				to[j] = ' ';
				j++;
			}
		}
		else{
			to[j] = from[i];
			j++;
		}
		i++;
	}
	to[j] = '\0';
}
