#include <iostream>
#include <math.h>

int main() {
	int n = 0;
	int res = 1, lastRes = 0, tempRes = 0;

	printf("Introduce un numero: ");
	scanf("%i", &n);

	for(int i = 0; i < n; i++){
		tempRes = res;  	
		res += lastRes;		
		lastRes = tempRes;
	}

	printf("%i\n", res);
}