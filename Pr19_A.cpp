// #include <iostream>
// #include <math.h>
// #include <list>

// using namespace std;

// bool NombreDescriptivoQueDeAEntederQueEstoDiceSiEsPrimarioONoAPoderSerEnIngles(int n){

// 	bool returnMe = true;

// 	for(int i = 2; i < n; i++){
// 		if (n % i == 0) returnMe = false;
// 	}

// 	return returnMe;
// }

// bool isDaw (int n) {
// 	list<int> divisores;

// 	for(int i = n/2; i >= 2; i--)
// 		if(n%i == 0) divisores.push_front(i);

// 	for(int divisor : divisores){

// 		printf("%i : %s\n", divisor, NombreDescriptivoQueDeAEntederQueEstoDiceSiEsPrimarioONoAPoderSerEnIngles(divisor) ? "True" : "False");

// 		if(!NombreDescriptivoQueDeAEntederQueEstoDiceSiEsPrimarioONoAPoderSerEnIngles(divisor)) return false;
// 	}

// 	return true;
// }

// int main() {
// 	int n;

// 	printf("Introduce un numero: ");
// 	scanf("%i", &n);

// 	n = abs(n);

// 	printf("%ss un numero DAW\n", isDaw(n) ? "E" : "No e");
// }