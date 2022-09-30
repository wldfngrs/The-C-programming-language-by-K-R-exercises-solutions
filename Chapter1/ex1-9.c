/* C Program to copy its input to output, replacing each string of one or more blanks wiht a single blank*/

#include <stdio.h>

int main() {
	int c;
	while ((c = getchar())!=EOF) {
		if (c == ' ') {
			if (getchar() == ' ') {
				putchar(c);
			}
			else {
				putchar(c);
			}
		}
		else {
			putchar(c);
		}
	}
}
