#include<stdio.h>


int main(){

	char operator;
	double z1;
	double z2;
	double ergbnis;

	printf("Geben Sie ein Operator ein: (+), (-), (*), (/) : ");
	scanf("%c", &operator);

	printf("Geben Sie die Erste zahl ein: ");
	scanf("%lf", &z1);


	printf("Geben Sie die zweite zahl ein: ");
	scanf("%lf", &z2);

	switch(operator){
		case '+' :
			ergbnis = z1 + z2 ;
			printf("Das Ergbnis: %0.2lf + %0.2lf = %0.2lf", z1, z2, ergbnis );
			break;
		case '-' :
			ergbnis = z1 - z2 ;
			printf("Das Ergbnis: %0.2lf - %0.2lf = %0.2lf", z1, z2, ergbnis );
			break;
		case '*' :
			ergbnis = z1 * z2 ;
			printf("Das Ergbnis: %0.2lf * %0.2lf = %0.2lf", z1, z2, ergbnis );
			break;
		case '/' :
			ergbnis = z1 / z2 ;
			printf("Das Ergbnis: %0.2lf / %0.2lf = %0.2lf", z1, z2, ergbnis );
			break;

		default:
			printf("%c is not valid", operator);




	}

	return 0;
}
