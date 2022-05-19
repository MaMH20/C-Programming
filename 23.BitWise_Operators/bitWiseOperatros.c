#include<stdio.h>



int main() {



// & = AND
// | = OR
// ^ = XOR
// <<  left shift
// >> right shift


	int x = 6;  //0000 0110
	int y = 12; //0000 1100
	int z = 0;  //0000 0000


	z = x & y;

	printf("AND = %d\n", z);

	z = x | y;

	printf("OR = %d\n", z);


	z = x ^ y;

	printf("XOR = %d\n", z);

	z = x <<  1;

	printf("Left shift = %d\n", z);

	z = x >>  1;

	printf("Right shift %d\n", z);
return 0;
}
