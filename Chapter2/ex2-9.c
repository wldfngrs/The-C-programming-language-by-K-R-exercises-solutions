#include <stdio.h>

int bitcount(unsigned x);

int main() {
	unsigned x = 2 & (2-1);
	printf("%d\n", bitcount(16777215));
}

int bitcount(unsigned x) {
	int b;
	
	while (x &=(x-1)) {
		b++;
	}
	
	return ++b;
}
