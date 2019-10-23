#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ( int argc, char *argv[] ){

    char myVar[100];
    char myChar;

    int caesar;
    if ( argc != 2 ){
        printf( "usage: %s filename\n", argv[0] );
        return 1;
    } else {
        int key = atoi(argv[1]);
        printf("plaintext: ");
        /*myVar = get-string()*/
        scanf ("%[^\n]%*c", myVar);
        printf("ciphertext: ");
        
        //if key is bigger than 26 then returns the remainder
        if (key > 26){
            key = key % 26;
        }
    
        // iterate over the string
        for(int i = 0, myLen = strlen(myVar); i < myLen; i++){
           if((myVar[i] >= 'a') && (myVar[i] <= 'z')){
               caesar = myVar[i] + key;
              if(caesar > 'z'){
                printf("%c", (char)caesar - 26);
              } else if (caesar < 'a'){
                printf("%c", (char)caesar + 26);
              } else {
                  printf("%c", (char)caesar);
              }
        
           } else if((myVar[i] >= 'A') && (myVar[i] <= 'Z')){
               caesar = myVar[i] + key;
              if(caesar > 'Z'){
                printf("%c", (char)caesar - 26);
              } else if (caesar < 'A'){
                printf("%c", (char)caesar + 26);
              } else {
                  printf("%c", (char)caesar);
              }
           }else{
               printf("%c", myVar[i]);
           }
        }

    }
    printf("\n");
}