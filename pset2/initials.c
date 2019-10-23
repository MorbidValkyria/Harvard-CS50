#include <ctype.h>  //the lib which contains input and output functions
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){

    int z;
    char name[100];

    scanf ("%[^\n]%*c", name);
    if (name[0] != ' ')
      printf("%c", toupper(name[0]));
    for (int i = 0, y = strlen(name); i < y; i++){
        //
        if (name[i] == ' '){
            z = i + 1;
        while(name[z] == ' '){
              z+=1;
              i++;
        }
	    printf("%c", toupper(name[z]));
      }

    }
    printf("\n");
}
