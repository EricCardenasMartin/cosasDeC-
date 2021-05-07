#include <iostream>
#include <time.h>
#include <stdlib.h> //para el exit()

using namespace std; // Para el override del print

ostream& operator<<(ostream& os, int (&input)[5][5]){
	os << "{";
	for(int x = 0; x < 5; x++){
		os << "{";
		for(int y = 0; y < 5; y++){
			os << input[y][x];
			if(y < 4) 
				os << ", ";
		}
		if(x == 4)
			os <<  "}}" << endl;
		else
			os <<  "}" << endl;
	}
    return os;
}

void Swap(int& a, int& b){
	int c = a;
	a = b;
	b = c;
}

void SetSize(int &sizeX, int &sizeY){
	do{
		printf("Cuantas columnas quieres que tenga? ");
		scanf("%i", &sizeX);
		if(sizeX < 1 || sizeX > 5)
			printf("\nSolo puedes crear un array que tenga entre 1 x 5 columnas :/ \n\n");
	} while (sizeX < 1 || sizeX > 5);
	
	do{
		printf("Cuantas filas quieres que tenga? ");
		scanf("%i", &sizeY);
		if(sizeY < 1 || sizeY > 5)
			printf("\nSolo puedes crear un array que tenga entre 1 x 5 filas :/ \n\n");
	} while (sizeY < 1 || sizeY > 5);
	printf("\n");
}

void InitArrayAuto (int (&modifyMe)[5][5], int sizeX, int sizeY){
	for(int x = 0; x < sizeY; x++){
		for(int y = 0; y < sizeX; y++){
			modifyMe[y][x] = rand() % 19 - 10;
		}
	}
}

void InitArrayManual (int (&modifyMe)[5][5], int sizeX, int sizeY){
	int tempN = 0;

	printf("\n");
	for(int x = 0; x < sizeY; x++){
		for(int y = 0; y < sizeX; y++){
			printf("Introduce el numero de la posicion [%i, %i]: ", x, y);
			scanf("%i", &tempN);
			modifyMe[y][x] = tempN;
		}
	}
	printf("\n");
}

void InitArray(int (&modifyMe)[5][5], int sizeX, int sizeY){
	int opcion = 0;

	do{
		printf("1. De forma manual\n");
		printf("2. De forma automatica\n\n");
		scanf("%i", &opcion);
		if(opcion != 1 && opcion != 2)
			printf("\nPorfavor escoge una de las 2 opciones (1 o 2)\n\n");
	} while(opcion != 1 && opcion != 2);

	opcion == 1 ? InitArrayManual(modifyMe, sizeX, sizeY) : InitArrayAuto(modifyMe, sizeX, sizeY);
}

void SumarArrays(int (&modifyMe)[5][5], int (&input1)[5][5], int (&input2)[5][5], int sizeX, int sizeY, int sizeX2, int sizeY2){
	if(sizeX != sizeX2 ||sizeY != sizeY2){
		cerr << "Solo se puede sumar arrays con las mismas dimensiones :/\n";
		exit(EXIT_FAILURE);
	}

	for(int x = 0; x < sizeY; x++)
		for(int y = 0; y < sizeX; y++)
			modifyMe[y][x] = input1[y][x] + input2[y][x];
}

void RestarArrays(int (&modifyMe)[5][5], int (&input1)[5][5], int (&input2)[5][5], int sizeX, int sizeY, int sizeX2, int sizeY2){
	if(sizeX != sizeX2 ||sizeY != sizeY2){
		cerr << "Solo se puede restar arrays con las mismas dimensiones :/\n";
		exit(EXIT_FAILURE);
	}

	for(int x = 0; x < sizeY; x++)
		for(int y = 0; y < sizeX; y++)
			modifyMe[y][x] = input1[y][x] - input2[y][x];
}

void MultiplicarArrays(int (&modifyMe)[5][5], int (&input1)[5][5], int (&input2)[5][5], int sizeX, int sizeY, int sizeX2, int sizeY2){
	if(sizeX != sizeY2){
		cerr << "Solo se puede multiplicar arrays cuando el numero de columnas es el mismo que el de filas de la segunda :/\n";
		exit(EXIT_FAILURE);
	}
	
	for(int y1 = 0; y1 < sizeY; y1++)
		for(int x1 = 0; x1 < sizeX2; x1++)
			for(int y2 = 0; y2 < sizeY2; y2++)
				modifyMe[x1][y1] += input2[x1][y2] * input1[y2][y1];
}

int main() {
	// int a1[5][5] = {{2,3,0,1,0},
	// 			    {-1,-2,1,-1,0},
	// 			    {0,0,0,0,0},
	// 			    {0,0,0,0,0},
	// 			    {0,0,0,0,0}};

	// int a2[5][5] = {{2,0,0,0,0},
	// 			    {1,-1,0,0,0},
	// 			    {1,3,0,0,0},
	// 			    {0,0,0,0,0},
	// 			    {0,0,0,0,0}};

	// int result[5][5];
	
	// MultiplicarArrays(result, a1, a2, 2, 4, 3, 2);

	// cout << result << endl;


	srand(time(NULL));
	int sizeX, sizeY;
	int sizeX2, sizeY2;

	printf("Dimensiones de la primera array:\n");
	SetSize(sizeX, sizeY);

	printf("Dimensiones de la segunda array:\n");
	SetSize(sizeX2, sizeY2);

	int array1[5][5] = {{0,0,0,0,0},
				    {0,0,0,0,0},
				    {0,0,0,0,0},
				    {0,0,0,0,0},
				    {0,0,0,0,0}};

	int array2[5][5] = {{0,0,0,0,0},
				    {0,0,0,0,0},
				    {0,0,0,0,0},
				    {0,0,0,0,0},
				    {0,0,0,0,0}};

	printf("Como quieres inicializar la primera array:\n");

	InitArray(array1, sizeX, sizeY);

	printf("\n");

	cout << array1 << endl;

	printf("Como quieres inicializar la segunda array:\n");

	InitArray(array2, sizeX2, sizeY2);

	printf("\n");

	cout << array2 << endl;

	int opcion = 0;

	printf("Que quieres hacer:\n");
	do{
		printf("1. Sumar las arrays\n");
		printf("2. Restar las arrays\n");
		printf("3. Multiplicar las arrays (AxB)\n");
		printf("4. Multiplicar las arrays (BxA)\n\n");
		scanf("%i", &opcion);
		printf("\n");
		if(opcion < 1 || opcion > 4)
			printf("Porfavor escoge una de las 4 opciones (1, 2, 3 o 4)\n\n");
	} while(opcion < 1 || opcion > 4);

	int result[5][5];

	switch(opcion){
		case 1:
			SumarArrays(result, array1, array2, sizeX, sizeY, sizeX2, sizeY2);
			break;
		case 2:
			RestarArrays(result, array1, array2, sizeX, sizeY, sizeX2, sizeY2);
			break;
		case 3:
			MultiplicarArrays(result, array1, array2, sizeX, sizeY, sizeX2, sizeY2);
			break;
		case 4:
			MultiplicarArrays(result, array2, array1, sizeX, sizeY, sizeX2, sizeY2);
			break;
	}

	cout << result << endl;
}