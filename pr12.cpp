#include <iostream>
#include <math.h>

int main() {
	int n = 0;
	int multiplos7 = 0;

	while(n != -1){
		printf("Introduce un numero: ");
		scanf("%i", &n);

		if(n % 7 == 0) multiplos7++;
	}

	printf("Numero de multiplos de 7 introducidos: %i\n", multiplos7);
}