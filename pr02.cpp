// #include <iostream>

// int main() {
// 	int cY, cM, cD;
// 	int bY, bM, bD;
// 	int rY, rM, rD;
// 	int n;

// 	printf("En que año estamos? ");
// 	scanf("%i", &cY);
// 	printf("En que mes estamos? ");
// 	scanf("%i", &cM);
// 	printf("En que dia estamos? ");
// 	scanf("%i", &cD);

// 	printf("En que año naciste? ");
// 	scanf("%i", &bY);
// 	printf("En que mes naciste? ");
// 	scanf("%i", &bM);
// 	printf("En que dia naciste? ");
// 	scanf("%i", &bD);

// 	rY = cY - bY;	
// 	rM = cM - bM;
// 	if(cM < bM){
// 		rY--;
// 		rM += 12;
// 	} 
// 	rD = cD - bD;
// 	if(cD < bD){
// 		rM--;
// 		printf("Cuantos dias tiene el mes pasado? ");
// 		scanf("%i", &n);
// 		rD += n;
// 	}

// 	printf("La edad de quien haya nacido el %i-%i-%i a dia de hoy %i-%i-%i es %i-%i-%i", bY, bM, bD, cY, cM, cD, rY, rM,rD);
// }