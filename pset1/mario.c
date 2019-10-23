#include <stdio.h>  //the lib which contains input and output functions
#include <stdlib.h> // the lib which contains memory allocation functions
#include <ctype.h>  //the lib which contains character type functions
#define bufferSize 10


int getRows(void);
int main(){

	int pyramidRows, spaces;

	printf("Height: ");

	pyramidRows = getRows();


	for(int i = 1; i <= pyramidRows; i++){
		//Creates the spaces for the inverse pyramid
		for(spaces = pyramidRows - i; spaces >= 1; spaces--)
			printf(" ");

		// creates the hashes and constructs the pyramid
		for(int j = 0; j <= i ; j++)
           		printf("#");

       		printf("\n");
	}

}

int getRows(void){
   int myInput;
   char buffer[bufferSize];
   char *chk;
    // Makes sure user enters an integer (Not a float or a string)
   do {
     fflush(stdout);
     if (fgets(buffer, sizeof buffer, stdin) != NULL){

       myInput = (int) strtol(buffer, &chk, 10);
       if((!isspace(*chk) && *chk != 0) || myInput < 0 || myInput > 23 || isalpha(myInput) == 1)
        printf("Retry: ");


     }


   } while ((!isspace(*chk) && *chk != 0) || myInput < 0 || myInput > 23 || isalpha(myInput) == 1);
  return myInput;
}
