#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
	printf("Type                      lower_limit              upper_limit   \n");
	printf("--------------------------------------------------------------\n");
	printf("%-16s %20d %24d\n", "SIGNED CHAR", SCHAR_MIN, SCHAR_MAX);
	printf("%-16s %20d %24d\n", "UNSIGNED CHAR", 0, UCHAR_MAX);
	printf("%-16s %20d %24d\n", "SHORT INT", SHRT_MIN, SHRT_MAX);
	printf("%-16s %20d %24d\n", "INT", INT_MIN, INT_MAX);
	printf("%-16s %20d %24d\n", "CHAR", CHAR_MIN, CHAR_MAX);
	printf("%-16s %20ld %24ld\n", "LONG INT", LONG_MIN, LONG_MAX);
	printf("%-16s %.14e %.18e\n", "FLOAT", FLT_MIN, FLT_MAX);
}
