// #include <iostream>
// #include<math.h>
// #include<list>

// using namespace std;

// void PrintCurioso(list<int> n){
// 	int suma = 0;

// 	printf("Suma:");

// 	for(int i = n.front(); i <= n.back(); i++){
// 		suma += i;
// 		printf(" %i ", i);
// 		if(i != n.back()) printf("+");
// 	}

// 	printf("= %i\n", suma);

// 	printf("El numero %i si es un numero curioso\n", suma);
// }

// list<int> NumeroCurioso(int n){
// 	int firstIndex = 1, lastIndex = 2;
// 	int lastFirstIndex, lastLastIndex;
// 	int suma = 0;

// 	while(suma != n && firstIndex + lastIndex <= n){
// 		suma = 0;
// 		lastFirstIndex = firstIndex;
// 		while(suma < n && lastIndex < n){
// 			lastLastIndex = lastIndex;
// 			suma = 0;
// 			for(int i = firstIndex; i <= lastIndex; i++){
// 				suma += i;
// 			}
// 			lastIndex++;
// 		}
// 		firstIndex++;
// 		lastIndex = firstIndex + 1;
// 	}

// 	list<int> returnMe;

// 	if(suma == n){
// 		returnMe.push_back(lastFirstIndex);
// 		returnMe.push_back(lastLastIndex);
// 	} else {
// 		returnMe.push_back(-1);
// 	}

// 	return returnMe;
// }

// void ListaNumerosCuriosos(int n){
// 	list<int> a;
// 	for(int i = 3; i < n; i++){
// 		a = NumeroCurioso(i);

// 		if(a.front() != -1) PrintCurioso(a);
// 	}
// }

// int main() {
// 	int n;

// 	printf("Introduce un numero: ");
// 	scanf("%i", &n);

// 	n = abs(n);
	
// 	list<int> numeroCuriosoRes = NumeroCurioso(n);

// 	ListaNumerosCuriosos(n);

// 	if(numeroCuriosoRes.front() != -1) 
// 		PrintCurioso(numeroCuriosoRes);
// 	else
// 		printf("El numero %i no es un numero curioso\n", n);
// }