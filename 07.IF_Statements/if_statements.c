#include<stdio.h>


int main(){



	int age;

	printf("Enter your age: ");
	scanf("%d", &age);



	if(age >= 18){
		printf("You are now signed up !");
	}

	else if(age < 0){
		printf("You have not been born yet!");
	}

	else{
		printf("you are young to sign up!");
	}





	return 0;









}
