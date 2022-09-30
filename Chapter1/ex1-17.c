/* C Program to print all input lines that are longer than 80 characters. */

#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	
	while ((len = getLine(line, MAXLINE)) > 0) {
		if (len > 80) {
			printf("%d: ", len);
			copy(longest, line);
			printf("%s", longest);
		}
	}
}

int getLine (char line[], int maxline) {
	int c, i;
	
	for (i=0; i<maxline-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
		line[i] = c;
	}
	
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i;
	
	i = 0;
	while ((to[i] = from[i]) != '\0') {
		++i;
	}
}
