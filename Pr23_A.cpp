// #include <iostream>
// #include<math.h>

// void NumeroCurioso(int n){
// 	int firstIndex = 1, lastIndex = 2;
// 	int lastFirstIndex, lastLastIndex;
// 	int suma = 0;

// 	while(suma != n && firstIndex + lastIndex <= n){
// 		suma = 0;
// 		lastFirstIndex = firstIndex;
// 		while(suma < n && lastIndex < n){
// 			// printf("Index1: %i || Index2: %i || Suma:", firstIndex, lastIndex);
// 			lastLastIndex = lastIndex;
// 			suma = 0;
// 			for(int i = firstIndex; i <= lastIndex; i++){
// 				suma += i;
// 				// printf(" %i ", i);
// 				// if(i != lastIndex) printf("+");
// 			}
// 			// printf("= %i\n", suma);

			

// 			lastIndex++;
// 		}
// 		firstIndex++;
// 		lastIndex = firstIndex + 1;
// 		// printf("[FIRST INDEX ++] First: %i || Last: %i\n", firstIndex, lastIndex);
// 	}

// 	printf("Suma:");
// 	for(int i = lastFirstIndex; i <= lastLastIndex; i++){
// 		printf(" %i ", i);
// 		if(i != lastLastIndex) printf("+");
// 	}
// 	printf("= %i\n", suma);

// 	printf("El numero %i %s es un numero curioso\n", n, suma == n ? "Si" : "No");
// }

// int main() {
// 	int n;

// 	printf("Introduce un numero: ");
// 	scanf("%i", &n);

// 	n = abs(n);

// 	NumeroCurioso(n);
// }