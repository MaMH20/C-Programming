#include <stdio.h>
#include <math.h>

// -lm link math bib unter linux
// gcc filenaem.c -o filename -lm


int main(){

	double a;
	double b;
	double c;

	printf("Geben Sie Seite A ein : ");
	scanf("%lf", &a);


	printf("Geben Sie Seite b B ein : ");
	scanf("%lf", &b);

	c = sqrt(a*a + b*b);

	//c = sqrt(9);


	printf("Seite C = %lf", c);


return 0;


}
