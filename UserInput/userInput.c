#include<stdio.h>

int main() {
	
	char name[25]; //bytes
	int age;


	printf("What is your name? \n");
	//scanf("%s", &name); // does not include white spaces
	fgets(name, 25,stdin); //include white spaces
 
	printf("How old are you? \n");
	scanf("%d", &age);

	printf("Hallo %s\n", name);
	printf("you are %d years old\n", age);

	return 0;
}
