#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int x, y;
	scanf ("%d", &x);
	scanf ("%d", &y);
	printf ("O maior número digitado foi:\n");
	if (x > y) {
		printf ("%d\n", x);
	} else {
		printf ("%d\n", y);
	}
	exit(EXIT_SUCCESS);
}
