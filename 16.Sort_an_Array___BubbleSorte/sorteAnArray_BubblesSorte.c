#include<stdio.h>

/*//==============Declaration============

void sort(int x[], int y);

void print(int x[], int y);

//================Main===================

int main() 
{

	int array[] = {9,11,7,0,22,33,6,10};
	int size = sizeof(array) /sizeof(array[0]);

	sort(array, size);
	print(array, size);
}

//===============Definition===================



void sort(int x[], int y)
{
	for(int i = 0; i < y - 1; i++)
	{
		for(int j = 0; j < y - 1; j++)
		{
			if(x[j] > x[j +1])
			{
				int temp;

				temp =x[j];
				x[j] = x[j+1];
				x[j+1] = temp;
			}
		}
	}	
}




void print(int x[], int y) 
{
	for(int i = 0; i < y; i++)
	{
		printf("%d\n", x[i]);
	}


}*/

//==============Declaration============

void sort(char array[], int size);

void print(char array[], int size);

//================Main===================

int main() 
{

	//int array[] = {9,11,7,0,22,33,6,10};
	char array[] = {'M', 'A', 'D', 'E', 'L'};
	int size = sizeof(array) /sizeof(array[0]);

	sort(array, size);
	print(array, size);
}

//===============Definition===================



void sort(char array[], int size)
{
	for(int i = 0; i < size - 1; i++)
	{
		for(int j = 0; j < size - 1; j++)
		{
			if(array[j] > array[j +1])  //  Größer als oder Kleiner als.......... Auf-/ Absteigend
			{
				 char temp;

				temp =array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}	
}




void print(char array[], int size) 
{
	for(int i = 0; i < size; i++)
	{
		printf("%c\n", array[i]);
	}


}

