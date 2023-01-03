#include <stdio.h>
#include <stdlib.h>

#define size 100

void escape(char* s, char* t);
void undoEscape(char* s, char* t);

int main() {
	char a[size]; char b[size];
	
	//escape(a, b); uncomment for the escape function
	undoEscape(a, b);
}

void escape(char* s, char* t) {
	int i = 0;
	int c;
	while (((c = getchar()) != EOF) && i < size) {
		s[i] = c;
		i++;
	}
	
	i = 0;
	int j = 0;
	
	for(int i = 0; i < size && j < size; i++) {
		c = s[i];
		switch(c) {
			case '\t':
				t[j++] = '\\';
				t[j++] = 't';
				break;
			case '\n':
				t[j++] = '\\';
				t[j++] = 'n';
				break;
			default:
				t[j++] = s[i];
				break;
		}
	}
	
	printf("escaped: %s\n", t);
}

void undoEscape(char* s, char* t) {
	int i = 0;
	int c;
	while (((c = getchar()) != EOF) && i < size) {
		s[i] = c;
		i++;
	}
	
	i = 0;
	int j = 0;
	
	for (int i = 0; i < size && j < size;) {
		c = s[i++];
		if (c == '\\') {
			c = s[i];
			switch(c) {
				case 't':
					t[j++] = '\t';
					i++;
					break;
				case 'n':
					t[j++] = '\n';
					i++;
					break;
				default:
					t[j++] = s[--i];
					i+=2;
					break;
			}
		}
		else t[j++] = c;
	}
	
	printf("undoEscaped:\n%s\n", t);
}
