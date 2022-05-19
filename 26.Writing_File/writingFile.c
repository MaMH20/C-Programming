#include<stdio.h>


int main() {


//Create a File
	FILE *pF = fopen("textFile.txt", "a"); //w = Writing,    a = Append

	fprintf(pF, "\nInformatik");

	fclose(pF);

	//Delete A file

	/*if(remove("textFile.txt")== 0)
	  {
	  printf("That file was Deleted Successfully");

	  }

	  else
	  {

	  printf("File Can not Found!!");

	  }*/

	return 0;}
