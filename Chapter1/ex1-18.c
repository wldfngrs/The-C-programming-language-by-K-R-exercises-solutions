/* C Program to remove the trailing blanks and tabs from each line of input, and to delete entirely blank lines. */

#include <stdio.h>
#define MAXLINE 1000

int fetch(char line[], int);
void copy(char to[], char from[]);

int main() {
	int len;
	char line[MAXLINE];
	char longest[MAXLINE];
	
	while ((len = fetch(line, MAXLINE)) > 0) {
		copy(longest, line);
		printf("%s", longest);
	}
	
}

int fetch(char line[], int maxline) {
	int c, i;
	
	for (i = 0; i<maxline-1 && (c=getchar())!=EOF; ++i) {
		line[i] = c;
		
		if (c == '\n') {
			++i;
			break;
		}
	}
	
	line[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i, j;
	
	i = 0;
	j = 0;
	while (from[i] != '\0') {
		if (from[i] == ' ' || from[i] == '\t') {
			while (from[i] == ' ' || from[i] == '\t') {
				i++;
			}
			to[j] = from[i];
			++i;
			++j;
		}
		
		else {
			to[j] = from[i];
			++i;
			++j;
		}
	}
	to[j] = '\0';
}
