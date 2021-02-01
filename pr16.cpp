// #include <iostream>
// #include <math.h>

// int main() {
// 	float n = 0, res = 0;
// 	int decimales = 0;

// 	printf("Introduce un numero para sacar su raiz cuadrada: ");
// 	scanf("%f", &n);
// 	if(n >= 0){
// 		printf("Introduce el numero de decimales: ");
// 		scanf("%i", &decimales);

// 		float i = 0;
// 		while(pow(i, 2) < n){
// 			printf("%f\n", i);
// 			i += 1 * pow(10, -1*(decimales+2));
// 		}

// 		printf("La raiz cuadrada de %f es %.*f\n", n, decimales, i);
// 	} else {
// 		printf("Los numeros negativos no tienen solucion real para una raiz cuadrada");
// 	}
// }