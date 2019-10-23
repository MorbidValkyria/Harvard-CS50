#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

#define bufferSize 10


int getNumber(void);

int main(void){
  long long int cardNumber;

  cardNumber = getNumber();

  

  return 0;

}

long long int getNumber(void){
   long long int myInput;
   char buffer[bufferSize];
   char *check;

  //Will loop until user enters the correct input
   do {

     //flushes the
     fflush(stdout);

     //This takes input from the user
     if (fgets(buffer, sizeof buffer, stdin) != NULL){

       myInput = (long long int) strtol(buffer, &check, 10);

       //If the user entered something that isn't an int
       // or if isn't greater than zero it will promp a Retry
       // statement
       if((!isspace(*check) && *check != 0) || myInput <= 0)
	 printf("Retry: ");
     }


   } while ((!isspace(*check) && *check != 0) || myInput <= 0);
  return myInput;
}
