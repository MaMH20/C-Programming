#include<stdio.h>
#include<ctype.h>


int main(){

	char unit;
	float temp;

	printf("Is the temperature in (F) or in (C)?: ");
	scanf("%c", &unit);

	unit = toupper(unit);

	if(unit == 'F'){
		printf("Enter the temp in Farenheit: ");
		scanf("%f", &temp);

		temp =((temp - 32) * 5) / 9;
		printf("the temp in Celsius is: %0.2f", temp);
	}

	else if(unit == 'C'){
		printf("Enter the temp in Celsius: ");
		scanf("%f", &temp);

		temp = (temp * 9 / 5) + 32;
		printf("the temp in Farenheit is: %0.2f", temp);
	}
	else{

		printf("%c is not a valid input unit", unit);

	}
}
