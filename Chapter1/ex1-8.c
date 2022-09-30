/* C Program to count blanks, tabs, and newlines */

#include <stdio.h>

int main() {	
	int tc=0; // tab count
	int sc=0; // space count
	int nlc=0; // new line count
	int c;
	while ((c = getchar())!=EOF) {
		if (c == ' ') {
			++sc;
		}
		
		else if (c == '\n') {
			++nlc;
		}
		
		else if (c == '\t') {
			++tc;
		}
	}
	
	printf("\ntab count: %d\nspace count: %d\nnew line count: %d\n", tc, sc, nlc);
}
