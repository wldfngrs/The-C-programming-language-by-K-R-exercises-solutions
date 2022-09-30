/* C Program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash \\. Making the tabs and backspaces visible in an unanambiguos way*/

#include <stdio.h>

int main() {
	int c;
	while ((c = getchar())!=EOF) {
		if (c == '\t') {
			printf("\\t");
		}
		else if (c == 127 || c == 8){
			printf("\\b");
		}
		else if (c == 92) {
			printf("%c%c", 92, 92);
		}
		else {
			putchar(c);
		}
	}
}
