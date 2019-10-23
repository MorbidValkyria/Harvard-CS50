
#include <stdio.h>  //the lib which contains input and output functions
#include <stdlib.h> // the lib which contains memory allocation functions
#include <ctype.h>  //the lib which contains character type functions
#define bufferSize 10

/*Water problem Hacker edition*/

int getInt(void); //This is the function that will get input from the user


int main(void){
  int minutes;
  printf("minutes: ");
  minutes = getInt();

  printf("minutes: %i\nbottles: %i\n", minutes, minutes * 12);

}

int getInt(void){
   int myInput;
   char buffer[bufferSize];
   char *chk;
    // Makes sure user enters an integer (Not a float or a string)
   do {
     fflush(stdout);
     if (fgets(buffer, sizeof buffer, stdin) != NULL){

       myInput = (int) strtol(buffer, &chk, 10);
       if((!isspace(*chk) && *chk != 0) || myInput <= 0)
	    printf("Retry: ");
     }


   } while ((!isspace(*chk) && *chk != 0) || myInput <= 0);
  return myInput;
}
