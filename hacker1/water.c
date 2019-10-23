#include <stdio.h>  //the lib which contains input and output functions
#include <stdlib.h> // the lib which contains memory allocation functions
#include <ctype.h>  //the lib which contains character type functions
//Here I define my buffer size
#define bufferSize 10

/**Hacker edition of water problem
 * Calculates the amount bottles of water wasted when taking a shower
 * based on minutes.
 * */

int getInput(void); //This is the function that will get input from the user


int main(void){
  int minutes;
  printf("minutes: ");
  minutes = getInput(); //gets the correct input

  //prints the output
  printf("minutes: %i\nbottles: %i\n", minutes, minutes * 12);

  return 0; // the number 0 indicates that the program exited successfully

}

int getInput(void){
   int myInput;
   char buffer[bufferSize];
   char *check;

  //Will loop until user enters the correct input
   do {

     //clears the stdout before reading
     fflush(stdout);

     //This takes input from the user
     if (fgets(buffer, sizeof buffer, stdin) != NULL){

       myInput = (int) strtol(buffer, &check, 10);

       //If the user entered something that isn't an int
       // or if isn't greater than zero it will promp a Retry
       // statement
       if((!isspace(*check) && *check != 0) || myInput <= 0)
	       printf("Retry: ");
     }


   } while ((!isspace(*check) && *check != 0) || myInput <= 0);
  return myInput;
}

