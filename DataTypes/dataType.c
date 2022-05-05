#include<stdio.h>
#include<stdbool.h>

int main() {
	char a = 'A'; 			 // signal charahter      %c
	char b[] = "LOL";		 // array of characters   %s

	float c = 3.141592;	         // 4 bytes (32 bits of precision) 6 -7 digits %f
	double d  = 3.14159225437576365; // 8 bytes (64 bits of precision) 15 -16 digits %lf

	bool e = true;			 // 1 byte (true or false) %d

	char f = 100;			 // 1 byte (-128 to +127) %d Or %c
	unsigned char g = 255; 		 // 1 byte (0 to 255)     %d Or %c
	
	
	short int h  = 32767; 		 // 2 bytes (-32,78 to +32,767) %d
	unsigned short int i = 65535;	 // 2 bytes (0 to +65,535) %d

	printf("%c\n",a);
	printf("%s\n",b);
	printf("%0.15f\n",c);
	printf("%0.15lf\n",d);
	printf("%d\n",e);
	printf("%d\n",f);



















}
