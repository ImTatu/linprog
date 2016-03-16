#include <stdio.h>

int main (void) {
	int x,y;
    printf ("Digite um Número:");
	scanf ("%d", &x);
    printf ("Digite outro número:");
	scanf ("%d", &y);
	printf ("O maior número digitado foi:");
	if (x > y) {
		printf ("%d", x);
	} else {
		printf ("%d", y);
	}
	return 0;
}