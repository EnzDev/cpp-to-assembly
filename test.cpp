#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i=2,j;
	i=i*20+2;
	for (j = 0; j < 100; ++j) {
		i+=j;
	}
	printf("The Result is: %d\n", i); //4992
	return EXIT_SUCCESS;
}
