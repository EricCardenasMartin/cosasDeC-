// #include <iostream>
// #include <time.h>

// using namespace std;

// int main() {
// 	srand (time(NULL));

// 	int n = rand() % 1000 + 1;

// 	printf("RESPUESTA: %i\n\n", n);

// 	int min = 0, max = 1000;
// 	int answer = 0;
// 	bool isRight;

// 	int tries = 0;

// 	printf("El programa ha generat un nombre entre 0 i 1000.\n");

// 	do{
// 		printf("Intento nº%i\n\n", tries);
// 		printf("Quin creus que és?\n");
// 		scanf("%i", &answer);
// 		isRight = (n == answer);
// 		if(!isRight && tries < 10){
// 			if(answer < n)
// 				min = answer;
// 			else 
// 				max = answer;
// 			printf("El nombre està entre %i i %i:\n\n", min, max);

// 			tries++;
// 		}
// 	} while(!isRight && tries < 10);

// 	if(isRight)
// 		printf("CORRECTE! Has endevinat el número en %i intents.", tries);
// 	else
// 		printf("El numero era %i.", n);
// }