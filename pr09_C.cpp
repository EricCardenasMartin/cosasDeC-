#include <iostream>

int main() {
	int n = 0;
	int r = 0;

	printf("Introduce un numero: ");
	scanf("%i", &n);

	for(int i = 1; i <= n; i++){
		r += i;
	}
	
	printf("%i", r);
}