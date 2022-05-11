#include <stdio.h>
#include<string.h>


int main() {




	//While LOOP//


	/*char name[25];

	  printf("what is your name?: \n");
	  fgets(name, 25, stdin);

	  name[strlen(name) - 1] = '\0';


	  while(strlen(name) == 0) {

	  printf("You did not enterd your  name #§#§#§#§\n");

	  printf("what is your name?: \n");
	  fgets(name, 25, stdin);

	  name[strlen(name) - 1] = '\0';


	  }

	  printf("Hello %s" , name);*/


	//DO While Loop//  



	int number = 0;
	int sum = 0;

	do{

		printf("Enter a number greter than 0 : ");
		scanf("%d", &number );
		if(number > 0){

			sum += number;

		}

		printf("you Entered %d\n", number);
		printf("The sum is %d\n", sum);


	}while(number > 0);



	return 0;
}
