#include<stdio.h>

//void printAge(int age);

void printAge(int +pAge);

int main() {


	// pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
	//           some tasks are performed more easily with pointers
	//           * = indirection operator (value at address)
	//



	int age = 25;
	//int *pAge = &age;   //the same data type of the variable which we pointed to !!
	int *pAge = NULL; //good practice to assign NULL if declring a pointer
	pAge = &age;
	printf("Address of age: %p\n", &age);
	printf("Value of pAge:  %p\n", pAge);


	printf("Value of age: %d\n", age);
	printf("Value at Stored address: %d\n", *pAge); //derefrencing 

	printf("Size of age %d bytes: \n", sizeof(age));
	printf("Sze of pAge %d bytes: \n", sizeof(pAge)); 




	//printAge(age);


	printf(pAge);
	return 0;


}




/*void printAge(int age) {


  printf("you are %d yers old", age);

  }*/

void printAge(int *pAge) {


		printf("you are %d yers old", *pAge); //dereferce

		}
