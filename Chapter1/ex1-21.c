/* C Program that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Using the same tab stops as for detab. */

#include <stdio.h>
#define MAXCOUNT 1000

void entab(char output[], char input[]);
void copy(char to[], char from[]);

int main(){
	char textIn[MAXCOUNT];
	char textOut[MAXCOUNT];
	
	entab(textOut, textIn);
	
	printf("%s", textOut);
	
}

void entab(char output[], char input[]) {
	int c, i;
	for (i = 0; i < MAXCOUNT && (c = getchar())!=EOF; i++) {
		input[i] = c;
	}
	input[i] = '\0';
	
	copy(output, input);
}

void copy(char to[], char from[]) {
	int i, j;
	int spacecount = 0;
	
	i = 0;
	j = 0;
	while (from[i] != '\0') {
		if (from[i] == ' ') {
			do {
				spacecount++;
				i++;
			} while (from[i] == ' ');
		
			int rem = spacecount % 4;
			int quo = spacecount / 4;
		
			while (rem--) {
				to[j] = '\t';
				j++;
			}
			
			while (quo--) {
				to[j] = ' ';
				j++;
			}
		} else {
			to[j] = from[i];
			j++;
			i++;
		}
	}
	to[j] = '\0';
}
