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

// 		// printf("%i : %s\n", divisor, NombreDescriptivoQueDeAEntederQueEstoDiceSiEsPrimarioONoAPoderSerEnIngles(divisor) ? "True" : "False");

// 		if(!NombreDescriptivoQueDeAEntederQueEstoDiceSiEsPrimarioONoAPoderSerEnIngles(divisor)) return false;
// 	}

// 	return true;
// }

// void DawList (int n){
// 	list<int> dawNumbers;

// 	for(int i = 1; i < n; i++)
// 		if(isDaw(i)) dawNumbers.push_back(i);
	
// 	if(dawNumbers.size() > 0){

// 		list<int>::iterator it;

// 		it = dawNumbers.end();

// 		printf("Els nombres de DAW fins arribar al %i són %i", n, *dawNumbers.begin());
		
// 		dawNumbers.pop_front();

// 		for(int number : dawNumbers)
// 			printf(", %i", number);
		
// 		printf(".\n");
// 	}
// }

// int main() {
// 	int n;

// 	printf("Introduce un numero: ");
// 	scanf("%i", &n);

// 	n = abs(n);

// 	DawList(n);

// 	printf("El nombre %i %s és un nombre de DAW\n", n, isDaw(n) ? "Sí" : "No");
// }