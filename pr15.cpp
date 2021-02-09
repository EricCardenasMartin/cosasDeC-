#include <iostream>
#include <math.h>

int main() {
	int n = 0;
	int tempSum = 1;

	printf("Introduce un numero: ");
	scanf("%i", &n);

	n = abs(n);

	for(int i = 2; i < n; i++){
		if(n%i == 0) tempSum += i;
	}

	printf("%s\n", n == tempSum ? "Es perfecto" : "No es perfecto");
}