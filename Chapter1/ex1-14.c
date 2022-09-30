/* C Program to print a histogram of the frequencies of different characters in its input */ 

#include <stdio.h>

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word*/
#define a 90
#define z 122
#define A 65
#define Z 90
#define lower 33
#define upper 126

// print n + 33
int main() {
	int c;
	const int size = (upper - lower)-27;
	int letters[size];
	int state = OUT;
	int length = 0;
	
	for (int i=0; i<size; i++) {
		letters[i] = 0;
	}
	
	while ((c = getchar())!=EOF) {
		if (c==' ' || c=='\n' || c=='\t') {
			state = OUT;
			length = 0;
		}
		
		else if (state == OUT){
			if (c >= A && c <= Z){
				++letters[c-33];
			}
			
			else if (c >= a && c <= z) {
				++letters[(c-32)-33];
			}
			
			else if (c >= 123 && c <= 126) {
				++letters[(c-27)-33];
			}
			
			else {
				++letters[c-33];
			}
		}
	}
	printf("\n");
	for (int i=0; i<size; i++) {
		if (i >= 64 && i <= 66) {
			printf("%c: ", i+27+33);
		}
		
		else {
			printf("%c: ", i+33);
		}
		
		while (letters[i]--) {
			printf("#");
		}
		printf("\n");
	}
}
