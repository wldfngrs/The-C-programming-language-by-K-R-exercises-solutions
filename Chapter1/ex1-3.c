/* C Program to do temperature conversion from Fahrenheit to Celsius*/

#include <stdio.h>

int main() {
	float fahr, celsius;
	int lower, upper, step;
	
	printf("Fahr - Celsius\n");
	printf("--------------\n");
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%4.0f %9.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
