#include <stdio.h>
#include <stdlib.h>

char* lower(char* string);

int main() {
	char* string = malloc(30);
	printf("string: ");
	scanf("%s", string);
	printf("lower: %s\n", lower(string));
}

char* lower(char* string) {
	int i;
	for(i = 0; string[i] != '\n' && string[i] != EOF; i++) {
		string[i] = (string[i] >= 65 && string[i] <= 90) ? string[i] + 32 : string[i];
	}
	
	return string;
}
