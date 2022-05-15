#include<stdio.h>




//enum Tag{Mo, Di, Mi, Do, Fr, Sa, So};
// 0 , 1 , 2 , 3 , 4 , 5 , 6  

enum Tag{Mo = 1 , Di = 2, Mi = 3, Do = 4, Fr = 6, Sa = 6, So = 7};

int main() {

	//enum = a useer defined type of named integer identifiers
	//	helps to make a program more readable

	enum Tag heute = So;

	//	printf("%d", heute); //enums are Not STRINGS, but can treated as int


	if(heute == Sa || heute == So )
	{

		printf("Schoenes Wochenende\n");
	}
	else
	{

		printf("Du Musst Arbeiten");
	}

	return 0;
}
