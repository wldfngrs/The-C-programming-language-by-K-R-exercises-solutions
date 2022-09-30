/*C program to do temperature conversion from Celsius to Fahrenheit*/

#include <stdio.h>

int main() {
	float fahr, celsius;
	int lower, upper, step;
	
	printf("Celsius - Fahr\n");
	printf("--------------\n");
	
	lower = 0;
	upper = 300;
	step = 20;
	
	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius/(5.0/9.0) + 32.0;
		printf("%7.0f %7.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
