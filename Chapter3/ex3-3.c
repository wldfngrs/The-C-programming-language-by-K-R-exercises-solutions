#include <stdio.h>
#include <stdlib.h>

#define size 1000

void expand(char* s1, char* s2);

int main() {
	char a[size]; char b[size];
	
	expand(a, b);
}

void expand(char* s1, char* s2) {
	int start;
	int end;
	int c;
	int count = 0;
	
	int i = 0;
	
	while ((c = getchar()) != EOF && c != '\n') {
		s1[i++] = c;
		count++;
	}
	s1[i] = '\0';
	
	int j = 0;
	for (i = 0; i < count; i++) {
		if(s1[i] == '-' && i != 0 && i != count -1) {
			start = s1[i-1];
			end = s1[i+1];
			start++;
			
			while (j < size && start < end) {
				s2[j++] = start++;
			}
		} else s2[j++] = s1[i];
	}
	s2[j] = '\0';
	
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	
}
