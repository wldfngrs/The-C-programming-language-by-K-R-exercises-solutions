#include <stdio.h>
#define MAXCOUNT 10000

void check(int c);
void incomment();
void inquote(int c);

int brace = 0;
int paren = 0;
int brack = 0;

int main() {
	int c;
	while((c=getchar())!=EOF) {
		if (c == '\'' || c == '"') {
			inquote(c);
		}
		
		else if (c == '/') {
			c=getchar(); 
			if (c == '*') {
				incomment();
			}
			else if (c == '/') {
				while((c==getchar())!='\n') {
					continue;
				}
			}
		}

		else {
			check(c);
		}
	}
	
	if (brack > 0) {printf("Unmatched brackets!\n");}
	if (paren > 0) {printf("Unmatched parenthesis!\n");}
	if (brace > 0) {printf("Unmatched braces!\n");}
	
	return 0;
}

void incomment() {
	int c, d;
	c = getchar();
	d = getchar();
	
	while (c!='*'&&d!='/') {
		c = d;
		d = getchar();
		if (d == EOF) {
			break;
		}
	}
}

void inquote(int c) {
	int d;
	while ((d=getchar())!=c) {
		if (d == EOF) {
			printf("Unmatched quotes!\n");
			break;
		}
	}	
}

void check(int c){
	if (c == '(') {
		paren++;
	}
	
	else if (c == ')') {
		paren--;
	}
	
	else if (c == '[') {
		brack++;
	}
	
	else if (c == ']') {
		brack--;
	}
	
	else if (c == '{') {
		brace++;
	}
	
	else if (c == '}') {
		brace--;
	}
}
