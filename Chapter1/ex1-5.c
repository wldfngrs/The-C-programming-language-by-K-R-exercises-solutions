/* C Program to print temperature conversion table from ex1-4.c in reverse order*/

#include <stdio.h>

int main() {	
	int fahr;
	
	printf("Fahr - Celsius\n");
	printf("--------------\n");
	
	for (fahr = 300; fahr >= 0; fahr-=20) {
		printf("%3d %10.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}
