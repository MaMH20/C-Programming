#include<stdio.h>
#include<stdbool.h>

int main() {
	char a = 'A'; 			 // signal charahter      %c
	char b[] = "LOL";		 // array of characters   %s

	float c = 3.141592;	         // 4 bytes (32 bits of precision) 6 -7 digits %f
	double d  = 3.14159225437576365; // 8 bytes (64 bits of precision) 15 -16 digits %lf

	bool e = true;			 // 1 byte (true or false) %d

	char f = 100;			 // 1 byte (-128 to +127) %d Or %c
	//char f = 120;			 // 1 byte (-128 to +127) %d Or %c
	unsigned char g = 255; 		 // 1 byte (0 to 255)     %d Or %c
	
	
	short /*int*/ h  = 32767; 		         // 2 bytes (-32,78 to +32,767) %d
	unsigned short /*int*/ i = 65535;	         // 2 bytes (0 to +65,535) %d

	/*long*/ int j = 2147483647;                     // 4 bytes (-2,147,***,*** to +2,147,***,***)  %d
	unsigned int k = 4294967295;                     // 4 bytes (0 to +4,294,***,**) %u

	long long int l = 94455445647483647;             // 8 bytes (-9 quintillion to +9 quintillion)  %lld
	unsigned long long int m = 182646466446494967295;  // 8 bytes (0 to +18 quintillion) %llu





	printf("%c\n",a);         // char
	printf("%s\n",b);	  // charachter array
	printf("%0.15f\n",c);	  // float
	printf("%0.15lf\n",d);    // double
	printf("%d\n",e);         // bool
	printf("%d\n",f);         // char as numeric value
	//printf("%c\n",f);         // char as charachter value
	printf("%d\n",g);         // unsigend char as numeric value
	printf("%d\n",h);         // short
	printf("%d\n",i);         // unsigend short 
	printf("%d\n",j);         // int
	printf("%u\n",k);         // unsigend int
	printf("%lld\n",l);         // long long int
	printf("%llu\n",m);         // unsigned long long int








}
