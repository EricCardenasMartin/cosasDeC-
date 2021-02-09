#include <iostream>

int main() {
	float a,b;

	printf("Base? ");
	scanf("%f", &b);
	printf("Altura? ");
	scanf("%f", &a);

	printf("El area de un triangulo con base %f y altura %f es %f", b, a, (a*b)/2.0);
}