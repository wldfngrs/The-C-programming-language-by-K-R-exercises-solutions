/* C Program to print its input one word per line*/

#include <stdio.h>

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word*/

int main() {
	int c;
	int state = OUT;
	while ((c = getchar())!=EOF) {
		if (c==' ' || c=='\n' || c=='\t') {
			state = OUT;
			printf("\n");
		}
		
		else if (state == OUT){
			putchar(c);
		}
	}
}
