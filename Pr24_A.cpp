// #include <iostream>
// #include<math.h>
// #include<list>

// using namespace std;

// int ComprobarNarcisista(int n){
// 	list<int> numeros;
// 	int suma = 0;

// 	while(n > 0){
// 		numeros.push_front(n % 10);
// 		n /= 10;
// 	}

// 	for(int tempN : numeros)
// 		suma += pow(tempN, numeros.size());

// 	return suma;
// }

// int main() {
// 	int n;

// 	printf("Introduce un numero: ");
// 	scanf("%i", &n);

// 	n = abs(n);
	
// 	printf("%i %s es un numero narcisista\n", n, ComprobarNarcisista(n) ? "si" : "no");
// }