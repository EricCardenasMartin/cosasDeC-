// #include <iostream>
// // #include <stdlib.h>
// #include <math.h>
// #include <string.h>

// using namespace std;

// ostream& operator<<(ostream& os, int (&input)[8])
// {
// 	for(int item : input)
// 		os << (item == -1 ? 0 : item);
//     return os;
// }

// void Swap(int& a, int& b){
// 	int c = a;
// 	a = b;
// 	b = c;
// }

// void Push(int (&target)[8], int input){
// 	if(target[0] != -1){
// 		cerr << "Index out of range exception: The array is already full :/ \n";
// 		exit(1);
// 	}
// 	else {
// 		for(int i = 8 - 1; i > 0; i--){
// 			if(target[i] == -1){
// 				target[i] = input;
// 				break;
// 			}
// 		}
// 	}
// }

// void ParseBinary(int (&modifyMe)[8], char input[]){
// 	for(int i = 0; i < 8; i++)
// 		modifyMe[8 - i] = input[strlen(input) - i] >= '0' ? (int)input[strlen(input) - i] - '0' : 0;
// }

// void Decimal2Binario(int (&modifyMe)[8], int n){
// 	do{
// 		Push(modifyMe, n%2);

// 		n /= 2;
// 	} while(n >= 2);

// 	Push(modifyMe, n);

// 	for(int i = 0; i < 8; i++)
// 		if(modifyMe[i] == -1)
// 		 	modifyMe[i] = 0;
// 		else 
// 			break;
// }

// int Binario2Decimal(int (&binario)[8]){
// 	int returnMe = 0;
	
// 	for(int i = 0; i < 8; i++)
// 		returnMe += binario[8-1-i] == 1 ? 1 * pow(2, i) : 0;

// 	return returnMe;
// }

// int main() {
// 	int opcion, n;
// 	int binario[8] = {-1, -1, -1, -1, -1, -1, -1, -1};
	

// 	cout << binario << endl;

// 	do{
// 		printf("Que quieres hacer?\n");
// 		printf("1. Convertir de decimal a binario\n");
// 		printf("2. Convertir de binario a decimal\n\n");
// 		scanf("%i", &opcion);
// 		printf("\n");

// 		if (opcion != 1 && opcion != 2){
// 			printf("Porfavor introduce una de las opciones\n\n");
// 		}
// 	} while(opcion != 1 && opcion != 2);
// 	if(opcion == 1) {
// 		do{
// 			printf("Porfavor introduce un numero entre el 0 y el 255: ");
// 			scanf("%i", &n);
// 		} while(n <= 0 && n >= 255);
		
// 		Decimal2Binario(binario, n);

// 		// Push(binario, 1);
// 		// Push(binario, 0);
// 		// Push(binario, 1);
// 		// Push(binario, 0);
// 		// Push(binario, 1);
// 		// Push(binario, 0);
// 		// Push(binario, 1);
// 		// Push(binario, 0);

// 		cout << "Resultado: " << binario << endl;
// 	} else {
// 		bool validBinary = true;
// 		do{
// 			validBinary = true;
// 			int tempN[8] = {-1, -1, -1, -1, -1, -1, -1, -1};
// 			char tempString[8];

// 			printf("Porfavor introduce un numero en binario: ");
// 			scanf("%s", &tempString);
// 			cout << tempString << endl;
// 			ParseBinary(binario, tempString);
// 			cout << binario << endl;
// 		} while (!validBinary);
// 		// int binario2[8] = {-1, -1, -1, -1, -1, -1, -1, -1};

// 		// Push(binario2, 1);
// 		// Push(binario2, 1);
// 		// Push(binario2, 1);
// 		// Push(binario2, 0);
// 		// Push(binario2, 1);

// 		cout << Binario2Decimal(binario);
// 	}
// }