#include<stdio.h>


//=========================Declaration================

int vergleich( int size_a, int size_b);

//========================Main========================

int main(){

	int x[] = {1, 2, 3, 4, 5};
	int y[] = {1, 2, 3, 4, 5};
	int z[] = {9, 5, 3, 4, 1};

	int size_x = sizeof(x) / sizeof(x[0]);
	int size_y = sizeof(y) / sizeof(y[0]);
	int size_z = sizeof(z) / sizeof(z[0]);
	printf("%d\n", vergleich(size_x, size_y));
	printf("%d\n", vergleich(size_z, size_x));


	return 0;
}


//=========================Definition==================

int vergleich( int size_a, int size_b) {

	return size_a == size_b ? -1 : -2 ;




}




/*int vergleich(int a[], int size_a, int b[], int size_b);


int main(){

	int x[] = {1, 2, 3, 4, 5};
	int y[] = {1, 2, 3, 4};

	int size_x = sizeof(x) / sizeof(x[0]);
	int size_y = sizeof(y) / sizeof(y[0]);

	printf("%d\n", vergleich(x, size_x, y, size_y));


	return 0;
}
int vergleich(int a[], int size_a, int b[], int size_b) {

	return size_a == size_b ? -1 : -2 ;




}*/
