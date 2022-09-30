/* Rewrite of the C Program from ex1-5.c to now use a function for conversion */ 

#include <stdio.h>

float celToFahr(int);
float fahrToCel(int);

int main() {
	printf("Fahr - Celsius\n");
	printf("--------------\n");
	
	for (int fahr = 0; fahr <= 300; fahr+=20) {
		printf("%3d %10.1f\n", fahr, fahrToCel(fahr));
	}
	
	printf("================");
	printf("\nCelsius - Fahr\n");
	printf("--------------\n");
	
	for (int cel = 0; cel <= 300; cel+=20) {
		printf("%3d %10.1f\n", cel, celToFahr(cel));
	}
}

float celToFahr(int cel) {
	return cel/(5.0/9.0) + 32.0;
}

float fahrToCel(int fahr) {
	return (5.0/9.0)*(fahr-32);
}
