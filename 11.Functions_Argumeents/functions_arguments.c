#include <stdio.h>



//===================Declaration=============================


void birthday(char x[], int y);





//===========================Main============================


int main() {



	char name[] = "MoMO";
	int age = 24;


	birthday(name, age);

	return 0;

}


//=============================Definition=======================


void birthday(char x[], int y) {

	printf("Happy birthday %s\n", x );
	printf("You are %d years old\n", y);




}
