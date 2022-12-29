#define lim 1000
#include <stdio.h>

int main() {
	char c;
	char s[lim];
	for (int i=0; i<lim-1; ++i) {
		if ((c=getchar()) == '\n') {
			break;
		}
		if (c == EOF) {
			break;
		}
		s[i] = c;
		printf("%c", s[i]);
	}
}
