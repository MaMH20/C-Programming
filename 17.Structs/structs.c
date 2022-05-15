#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Vorlesung {

	char name[12];
	int cp;


};




int main() {

	struct Vorlesung V1;
	struct Vorlesung V2;
	struct Vorlesung V3;

	strcpy(V1.name, "Mathe");
	V1.cp =  6;

	strcpy(V2.name, "Informatik");
	V2.cp = 4;


	strcpy(V3.name, "Physik");
	V3.cp = 3;


	printf("%s:  \t %d\n", V1.name, V1.cp);
	//printf("%d\n", V1.cp);


	printf("%s: \t %d\n", V2.name,  V2.cp);
	//printf("%d\n", V2.cp);

	printf("%s: \t %d\n", V3.name, V3.cp);
	//printf("%d\n", V3.cp);
}
