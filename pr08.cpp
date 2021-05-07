// #include <iostream>

// int main() {
// 	float n1,n2,n3,n4;
// 	float p1,p2,p3,p4;
// 	char c;
// 	float r;

// 	printf("Introduce la nota 1: ");
// 	scanf("%f", &n1);

// 	printf("Introduce la nota 2: ");
// 	scanf("%f", &n2);

// 	printf("Introduce la nota 3: ");
// 	scanf("%f", &n3);

// 	printf("Introduce la nota 4: ");
// 	scanf("%f", &n4);

// 	printf("Que tipo de media quieres hacer? ");
// 	scanf(" %c", &c);

// 	switch(c){
// 		case 'a':
// 			r = (n1+n2+n3+n4)/4;
// 		break;
// 		case 'b':
// 			printf("Introduce el porcentage 1: ");
// 			scanf("%f", &p1);

// 			printf("Introduce el porcentage 2: ");
// 			scanf("%f", &p2);

// 			printf("Introduce el porcentage 3: ");
// 			scanf("%f", &p3);

// 			p4 = 100 - (p1 + p2 + p3);

// 			r = ((n1*p1)+(n2*p2)+(n3*p3)+(n4*p4))/100;
// 		break;
// 	}

// 	if(r < 5){
// 		printf("Suspendido");
// 	} else if(r < 6){
// 		printf("Suficiente");
// 	} else if(r < 7){
// 		printf("Bé");
// 	} else if(r < 9){
// 		printf("Notable");
// 	} else if(r < 9.8){
// 		printf("Excelente");
// 	} else {
// 		printf("Matricula de honor");
// 	}
// }