#include<stdio.h>

#include<string.h>





int main(){


	/*
	   int x = 5;

	   int y = 10;

	   int temp;                    	 // here temp is empty, will use next

	   temp = x; 				// here x is empty, will use next
	   x = y;  			        //here y is empty, will use next
	   y=temp;  				//here temp is empty again!!



	   printf("x = %d\n",x);

	   printf("y = %d\n",y);


*/


	char x[15] = "1. coffe";
	char y[15] = "2. Water";
	char temp[15];


	strcpy(temp, x);
	strcpy(x, y);
	strcpy(y, temp);


	printf("x = %s\n",x);

	printf("y = %s\n",y);

	return 0;

}
