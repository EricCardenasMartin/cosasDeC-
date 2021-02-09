#include <iostream>
#include <math.h>

int main() {
	float i = 1;
	float n = 0;

	printf("Introduce un numero: ");
	scanf("%f", &n);

	while(i < n){
		printf("%.2f ^ 2 = %.2f\n", i, pow(i, 2));
		i++;
	}
}