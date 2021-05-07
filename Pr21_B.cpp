// #include <iostream>

// int MCD2(int n1, int n2){
// 	int res = -1;

// 	while(res != 0){
// 		if(n1 >= n2) {
// 			res = n1 % n2;
// 			n1 = n2;
// 			n2 = res;
// 		} else {
// 			res = n2 % n1;
// 			n2 = n1;
// 			n1 = res;
// 		}
// 	}
	
// 	return n1 >= n2 ? n1 : n2;
// }

// void MCD3(int n1, int n2, int n3){
// 	printf("El MCD es %i\n", MCD2(MCD2(n1, n2), n3));
// }

// int main() {
// 	int n1, n2, n3;

// 	printf("Introduce un numero: ");
// 	scanf("%i", &n1);
// 	printf("Introduce otro numero: ");
// 	scanf("%i", &n2);
// 	printf("Introduce otro numero: ");
// 	scanf("%i", &n3);

// 	MCD3(n1, n2, n3);
// }