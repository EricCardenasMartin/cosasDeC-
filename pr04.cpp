// #include <iostream>
// #include <math.h>

// int main() {
// 	float x1,x2;
// 	float xImaginario;
// 	float a,b,c;
// 	float imaginario;

// 	printf("Introduce a: ");
// 	scanf("%f",&a);
// 	printf("Introduce b: ");
// 	scanf("%f",&b);
// 	printf("Introduce c: ");
// 	scanf("%f",&c);

// 	imaginario = pow(b, 2) - 4 * a * c;
// 	if (imaginario < 0){
// 		imaginario *= -1;

// 		x1 = -b / (2 * a);
// 		// x2 = -b / (2 * a);

// 		xImaginario = (sqrtf(imaginario)) / (2 * a);
// 		// x2i = (sqrt(imaginario)) / (2 * a);

// 		printf("X = %f + %fi\n", x1, xImaginario);
// 		// printf("X2 = %f + %fi\n", x2, x2i);
// 	} else {
// 		x1 = (-b + sqrtf(imaginario)) / (2 * a);
// 		x2 = (-b - sqrtf(imaginario)) / (2 * a);
		
// 		printf("X1 = %f\n", x1);
// 		printf("X2 = %f\n", x2);
// 	}
// }