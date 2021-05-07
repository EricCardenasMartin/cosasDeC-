// #include <iostream>
// #include <vector>

// using namespace std;

// void Swap(int& a, int& b){
// 	int c = a;
// 	a = b;
// 	b = c;
// }

// void BurbujaAscendente(vector<int>& sortMe){
// 	cout << "mmm...";

// 	int comparacion = 0;
// 	bool hasMove, isAlreadySorted;
	
// 	do{
// 		isAlreadySorted = true;
// 		for(int y = 0; y < sortMe.size()-1; y++){
// 			hasMove = false;
// 			do{
// 				comparacion = sortMe[y + 1] - sortMe[y];
// 				printf("Cuerrent index %i || %i - %i = %i\n", y, sortMe[y], sortMe[y + 1], comparacion);
				
// 				if(comparacion < 0){
// 					cerr << "a";
// 					Swap(sortMe[y], sortMe[y + 1]);

// 					hasMove = true;
// 					isAlreadySorted = false;
// 				} 
// 			} while(comparacion < 0);
			
// 			if(hasMove)
// 				y--;	
// 		}
// 	} while(!isAlreadySorted);
// }

// void BurbujaDescendente(vector<int>& sortMe){
// 	cout << "mmm...";

// 	int comparacion = 0;
// 	bool hasMove, isAlreadySorted;
	
// 	do{
// 		isAlreadySorted = true;
// 		for(int y = 0; y < sortMe.size()-1; y++){
// 			hasMove = false;
// 			do{
// 				comparacion = sortMe[y] - sortMe[y + 1];
// 				printf("Cuerrent index %i || %i - %i = %i\n", y, sortMe[y], sortMe[y + 1], comparacion);
				
// 				if(comparacion < 0){
// 					cerr << "a";
// 					Swap(sortMe[y], sortMe[y + 1]);

// 					hasMove = true;
// 					isAlreadySorted = false;
// 				} 
// 			} while(comparacion < 0);
			
// 			if(hasMove)
// 				y--;	
// 		}
// 	} while(!isAlreadySorted);
// }

// int main() {
// 	vector<int> n;
// 	int tempN, opcion;

// 	printf("Porfavor introduce 10 numeros\n");
// 	for(int i = 0; i < 10; i++){
// 		printf("Introduce el numero nº %i\n", i+1);
// 		cin >> tempN;
// 		n.push_back(tempN);
// 	}

// 	cout << endl;

// 	do{
// 		cout << "Como quieres ordenar estos numeros\n\n";
// 		cout << "1. Ascendente\n";
// 		cout << "2. Descendente\n\n";
// 		cin >> opcion;

// 		if(opcion != 1 && opcion != 2)
// 			cout << "\nPorfavor introduce una de las opciones validas\n\n";
// 	} while(opcion != 1 && opcion != 2);

// 	if(opcion == 1){
// 		BurbujaAscendente(n);
// 	}
// 	else
// 		BurbujaDescendente(n);

// 	for(int tempN : n){
// 		cout << tempN;
// 	}
// }