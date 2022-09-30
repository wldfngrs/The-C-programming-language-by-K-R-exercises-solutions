#include <stdio.h>
#define MAXCOUNT 50

void fold();

int main(){	
	fold();	
}

void fold() {
	int c;
	int i = 0;
	while((c = getchar())!=EOF) {
		if (i == MAXCOUNT - 1) {
			putchar('\n');
			putchar(c);
			i = 0;
		}
		else {
			putchar(c);
		}
		i++;
	}
}


