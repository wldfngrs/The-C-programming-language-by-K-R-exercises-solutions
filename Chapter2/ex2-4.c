#define lim 10
#include <stdio.h>

void squeeze(char s1[], char s2[]);
void intakeStr(char s[]);

int main(int argc, const char* argv[]) {
	printf("s1 str: ");
	char s1[lim];
	intakeStr(s1);
	printf("s2 str: ");
	char s2[lim];
	intakeStr(s2);
	squeeze(s1, s2);
}

void intakeStr(char s[]) {
	int i, c;
	for (i = 0; i < lim && ((c = getchar()) != EOF) && c != '\n'; i++) {
		s[i] = c;
	}
	s[i] = '\0';
}

void squeeze(char s1[], char s2[]) {
	int i, j, k;
	for (i = k = 0; (i < lim) && (s2[i] != '\0'); i++) {
		for (j = 0; (j < lim) && (s1[j] != '\0'); j++) {
			if (s1[j] != s2[i]) {
				s1[k++] = s1[j];
			}
		}
		s1[k] = '\0';
		k = 0;
	}
	printf("s1(squeezed): %s\n", s1);
}
