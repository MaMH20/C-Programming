#include<stdio.h>

int main() {


	/*double preise[] = {2.0, 5.8, 7.7, 10.6, 15.6, 23, 4,45};

	//printf("%ld bytes\n", sizeof(preise));

	for(int i = 0; i < sizeof(preise)/ sizeof(preise[4]); i++){

	printf("%0.2lf\n", preise[i]);
	}*/

	int numbers[3][3];

	int rows = sizeof(numbers)/sizeof(numbers[0]);
	int columes = sizeof(numbers[0])/sizeof(numbers[0][0]);



	printf("rows: %d\n", rows);
	printf("cloumes: %d\n", columes);



	numbers[0][0] = 1;
	numbers[0][1] = 2;
	numbers[0][2] = 3;
	numbers[1][0] = 4;
	numbers[1][1] = 5;
	numbers[1][2] = 6;
	numbers[2][0] = 7;
	numbers[2][1] = 8;
	numbers[2][2] = 9;


	for(int i = 0; i < rows; i++) {

		for(int j = 0; j < columes; j++) {

			printf("%d ", numbers[i][j]);

		}

		printf("\n");

	}




	return 0;
}

