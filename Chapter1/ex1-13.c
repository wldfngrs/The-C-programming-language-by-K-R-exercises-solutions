/* C Program to print a histogram of the lengths of words in its input*/

#include <stdio.h>

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word*/

int main() {
	int c;
	int state = OUT;
	int length = 0;
	while ((c = getchar())!=EOF) {
		if (c==' ' || c=='\n' || c=='\t') {
			state = OUT;
			while (length--) {
				printf("* ");
			}
			length = 0;
			printf("\n");
		}
		
		else if (state == OUT){
			putchar(c);
			++length;
		}
	}
}
