#define lim 1000
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

void htoi(const char hex[]);
void intakeString(char string[]);

int count = 0;
bool flag = true;

int main() {
	char s[lim];
	
	intakeString(s);
	htoi(s);
}

void htoi(const char hex[]) {
	extern int count;
	extern bool flag;
	
	if (flag == false) {
		printf("Invalid hex value!\n");
		return;
	}
	
	printf("Hex: %s\n", hex);
	int result=0;
	int i=0;
	double j = count-1;
	int k = 0;
	
	if (hex[0] == '0' && (hex[1] == 'x' || hex[1] == 'X')) {
		i+=2;
		j-=2;
	}
	
	while (hex[i]!='\0') {
		if ((hex[i] >= 'A' && hex[i] <= 'F') || (hex[i] >= 'a' && hex[i] <= 'f')) {
			k = tolower(hex[i]) - 87;
		} else {
			k = hex[i] - 48;
		}
		result += k * pow(16,j);
		i++;
		j--;	
	}
		
	printf("Int: %d\n", result);
}

void intakeString(char string[]) {
	extern bool flag;
	int i, c;
	for (i = 0; i < lim && (c = getchar())!=EOF && c!='\n'; i++) {
		if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f') || (c == 'x' || c == 'X')) {
			string[i] = c;
		} else {
			flag = false;
			return;
		}
		count++;
	}
	string[i] = '\0';	
}
