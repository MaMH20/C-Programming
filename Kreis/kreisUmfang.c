#include<stdio.h>
#include<math.h>

int main() {


	const double PI = 3.14;

	double radius;
	double umfang;
	double flaeche;

	printf("Geben Sie Raduis ein: \n");
	scanf("%lf", &radius);

	umfang = 2 * PI * radius;
	flaeche = PI * radius * radius;

	printf("Umfang = %lf\n", umfang);
	printf("Flaeche = %lf\n", flaeche);


}
