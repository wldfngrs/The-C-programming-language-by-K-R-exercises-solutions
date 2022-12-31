#include <stdio.h>
#include <stdlib.h>

int binsearch(int x, int v[], int n);
int binsearchOpt(int x, int v[], int n);

int main() {
	int sorted[10] = {1,2,3,4,5,6,7,8,9,10};
	//printf("index: %d\n", binsearch(4, sorted, 10));
	printf("indexOpt: %d\n", binsearchOpt(4, sorted, 10));
}

int binsearch(int x, int v[], int n) {
	int low, high, mid;
	
	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid]) {
			high = mid - 1;
		} else if (x > v[mid]) {
			low = mid + 1;
		} else {
			return mid;
		}
	}
	return -1;
}

int binsearchOpt(int x, int v[], int n) {
	int low, high, mid;
	
	low = 0;
	high = n-1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid]) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	
	if (x == v[--low]) return low;
	return -1;
}
