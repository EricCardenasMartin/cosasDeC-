#include <iostream>
#include <math.h>

int main() {
	float x1,y1; //1,3
	float x2,y2; // 4,7
	float r; // 4< 5= 6>
	float res = 0;

	printf("Introduce x1: ");
	scanf("%f",&x1);
	printf("Introduce y1: ");
	scanf("%f",&y1);

	printf("Introduce x2: ");
	scanf("%f",&x2);
	printf("Introduce y2: ");
	scanf("%f",&y2);

	printf("Introduce el radio: ");
	scanf("%f",&r);

	res = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

	printf("res = %f  # r = %f\n", res,r);

if (res < r)
	printf("interior");
else if (res == r)
	printf("pertenece");
else
	printf("exterior");
}