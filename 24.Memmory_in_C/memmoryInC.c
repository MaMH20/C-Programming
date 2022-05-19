
#include <stdio.h>

int main()
{
	// memory = an array of bytes within RAM (street)
	// memory block = a single unit (byte) within memory (house), used to hold some value (person)
	// memory address = the address of where a memory block is located (house address)

	char a;
	char b[1];  // datentyp ist wichtig für den Mommer + Anzahl der Elemente in der Array
	int c;

	printf("%d bytes\n", sizeof(a));
	printf("%ld bytes\n", sizeof(b));
	printf("%d bytes\n", sizeof(c));

	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", &c);
	return 0;
}
