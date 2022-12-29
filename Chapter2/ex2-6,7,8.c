#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
unsigned setbits(unsigned x, int p, int n, unsigned y);
unsigned invert(unsigned x, int p, int n);
unsigned rightrot(unsigned x, int n);

int main() {
	unsigned x = 900;
	unsigned y = 768;
	printf("setbits: %u\n", setbits(4, 1, 2, 2));
	printf("invert: %u\n", invert(18, 3, 2));
	printf("rightrot: %u\n", rightrot(43, 3));
}

unsigned getbits(unsigned x, int p, int n) {
	return (x >> (p+1-n)) & ~(~0 << n);
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
	return ((((x >> (p+1-n)) & (~0 << n)) | (y & ~(~0 << n))) << p+1-n) | (x & (~0 << p+1-n));
}

unsigned invert(unsigned x, int p, int n) {
	return ((x >> (p+1-n) ^ ~(~0 << n)) << p+1-n) | (x & ~(~0 << p+1-n));
}

unsigned rightrot(unsigned x, int n) {
	return (x >> n) | ((x & ~(~0 << n)) << n);
}
