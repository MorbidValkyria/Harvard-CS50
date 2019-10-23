#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define arraySize 20


int main(int argc, char** argv){

    char* name[arraySize];
    char* dynamic_str = malloc(arraySize);
    char* myChar;

    puts("Enter your name:");

    scanf ("%[^\n]%*c", &name);

    *myChar = *name[0];

    char* strTest = (char *) malloc(1 + strlen(*name)+ strlen(myChar));
    strcpy(strTest, myChar);
    strcat(dynamic_str, myChar);
    //Iterates through the whole name
    for (int i = 0; i < strlen(*name); i++)
      {

	if(*name[i] == ' '){
	  myChar = name[i + 1];
	  strcat(dynamic_str, myChar);
	}

      }
    printf("%s\n", dynamic_str);
    free(dynamic_str);
}
