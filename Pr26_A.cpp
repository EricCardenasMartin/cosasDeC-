// #include <iostream>
// #include <stdlib.h>

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

// int main() {
// 	int n;
// 	int binario[8] = {-1, -1, -1, -1, -1, -1, -1, -1};
	

// 	cout << binario << endl;

// 	do{
// 		printf("Porfavor introduce un numero entre el 0 y el 255: ");
// 		scanf("%i", &n);
// 	} while(n <= 0 && n >= 255);
	
// 	Decimal2Binario(binario, n);

// 	// Push(binario, 1);
// 	// Push(binario, 0);
// 	// Push(binario, 1);
// 	// Push(binario, 0);
// 	// Push(binario, 1);
// 	// Push(binario, 0);
// 	// Push(binario, 1);
// 	// Push(binario, 0);

// 	cout << "Resultado: " << binario << endl;
// }