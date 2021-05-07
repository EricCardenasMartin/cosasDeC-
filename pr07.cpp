// #include <iostream>
// #include <math.h>

// int main() {
// 	float x,y;
// 	char c;
// 	float r;

// 	printf("Introduce x: ");
// 	scanf("%f", &x);	

// 	printf("Introduce y: ");
// 	scanf("%f", &y);

// 	printf("Quina operació matemàtica vol fer amb aquest número?\na. Arrel de X.\nb. Arrel de Y.\nc. Inversa de X.\nd. Inversa de Y.\ne. Logaritme neperià de X.\nf. Logaritme neperià de Y.\ng. Logaritme en base 10 de X.\nh. Logaritme en base 10 de Y.\ni. Logaritme neperià X + logaritme neperià de Y.\nj. Logaritme en base 10 de X + logaritme en base 10 de Y.\nk. Àrea del quadrat de base X.\nl. Àrea del rectangle de base X i alçada Y.\nm. Àrea del triangle de base X i alçada Y.\nn. Àrea del cercle de radi X.\no. Àrea del cercle de radi Y.\np. Perímetre del cercle de radi X.\nq. Perímetre del cercle de radi Y.\nr. Àrea de la corona circular de radis X i Y.\ns. Volum de l’esfera de radi X.\nt. Volum de l’esfera de radi Y.\nu. Volum del cub de costat X.\nv. Volum del cub de costat Y.\n\n");

// 	scanf(" %c", &c);

// 	c = tolower(c);

// 	switch(c){
// 		case 'a':
// 			r = sqrt(x);
// 			printf("%f", r);
// 		break;
//  		case 'b' :
// 			r = sqrt(y);
// 			printf("%f", r);
// 		break;
// 		case 'c' :
// 			r = -x;
// 			printf("%f", r);
// 		break;
// 		case 'd' :
// 			r = -y;
// 			printf("%f", r);
// 		break;
// 		case 'e' :
// 			r = log(x);
// 			printf("%f", r);
// 		break;
// 		case 'f' :
// 			r = log(y);
// 			printf("%f", r);
// 		break;
// 		case 'g' :
// 			r = log10(x);
// 			printf("%f", r);
// 		break;
// 		case 'h' :
// 			r = log10(y);
// 			printf("%f", r);
// 		break;
// 		case 'i' :
// 			r = log(x) + log(y);
// 			printf("%f", r);
// 		break;
// 		case 'j' :
// 			r = log10(x) + log10(y);
// 			printf("%f", r);
// 		break;
// 		case 'k' :
// 			r = x*x;
// 			printf("%f", r);
// 		break;
// 		case 'l' :
// 			r = x*y;
// 			printf("%f", r);
// 		break;
// 		case 'm' :
// 			r = (x*y)/2;
// 			printf("%f", r);
// 		break;
// 		case 'n' :
// 			r = pow(M_PI * x, 2);
// 			printf("%f", r);
// 		break;
// 		case 'o' :
// 			r = pow(M_PI * y, 2);
// 			printf("%f", r);
// 		break;
// 		case 'p' :
// 			r = 2 * M_PI * x;
// 			printf("%f", r);
// 		break;
// 		case 'q' :
// 			r = 2 * M_PI * y;
// 			printf("%f", r);
// 		break;
// 		case 'r' :
// 			r = M_PI * ((y*y)-(x*x));
// 			printf("%f", r);
// 		break;
// 		case 's' :
// 			r = (4/3)*M_PI*pow(x, 3);
// 			printf("%f", r);
// 		break;
// 		case 't' :
// 			r = (4/3)*M_PI*pow(y, 3);
// 			printf("%f", r);
// 		break;
// 		case 'u' :
// 			r = x*x*x;
// 			printf("%f", r);
// 		break;
// 		case 'v' :
// 			r = y*y*y;
// 			printf("%f", r);
// 		break;
// 		default:
// 			printf("Orden no reconocida.");
// 		break;
// 	}
// }