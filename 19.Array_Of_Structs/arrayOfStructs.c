#include<stdio.h>


struct Student {

	char name[25];
	float note;


};


int main() {

	struct Student s1 = {"Alex", 3.0};

	struct Student s2 = {"Bella", 2.5};

	struct Student s3 = {"clara", 4.0};

	struct Student s4 = {"dina", 2.0};



	struct Student students[] ={s1, s2, s3, s4};

	for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++) {

		printf("%-15s\t%0.2f\n",students[i].name, students[i].note);

	}




	return 0;
}
