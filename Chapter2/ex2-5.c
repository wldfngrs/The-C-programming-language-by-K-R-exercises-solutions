#define lim 10

#include <stdio.h>

int any(char s1[], char s2[]);
void intakeStr(char s[]);

int main() {
	printf("s1 str: ");
	char s1[lim];
	intakeStr(s1);
	printf("s2 str: ");
	char s2[lim];
	intakeStr(s2);
	printf("Index: %d\n", any(s1, s2));
}

void intakeStr(char s[]) {
	int i, c;
	for (i = 0; i < lim && ((c = getchar()) != EOF) && c != '\n'; i++) {
		s[i] = c;
	}
	s[i] = '\0';
}

int any(char s1[], char s2[]) {
	int i, j;
	for (i = 0; (i < lim) && (s1[i] != '\0'); i++) {
		for (j = 0; (j < lim) && (s2[j] != '\0'); j++) {
			if (s1[i] == s2[j]) {
				return i;
			}		
		}
	}
}
