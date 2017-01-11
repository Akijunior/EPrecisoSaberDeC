
#include <stdio.h>
#include <stdlib.h>

main() {
	
	int n;
	int *ponteiro;
	n = 10;
	ponteiro = &n;
	int newVar = *ponteiro;
	ponteiro = 20;
	printf("%d\n%d", n, newVar);
}
