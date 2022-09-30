/* C Program to reverse the character string inputed (s) */

#include <stdio.h>
#define MAXLINE 1000

int fetch(char line[], int);
void reverse(char s[]);

int main() {
	int len;
	char line[MAXLINE];
	
	while ((len = fetch(line, MAXLINE)) > 0) {
		reverse(line);
		printf("%s", line);
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

void reverse(char s[]) {
	int i = 0;
	int j;
	char temp;
	while(s[i] != '\n') {
		i++;
	}
	i--;
	for (j = 0; j <= i; j++) {
		if (s[j] == s[i]) {
			;
		}
		
		else {	
			temp = s[j];
			s[j] = s[i];
			s[i] = temp;
		}
		
		--i;
	}
}
