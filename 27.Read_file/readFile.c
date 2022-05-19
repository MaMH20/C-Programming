#include<stdio.h>



int main() {




	FILE *pF = fopen("test.txt", "r"); // r = Read

	char buffer[100];


	if(pF == NULL) {


		printf("File Can not Found!!\n");


	}
	else {




		while(fgets(buffer, 100, pF) != NULL) {
			printf("%s", buffer);

		}



	}



	fclose(pF);







	return 0;

}
