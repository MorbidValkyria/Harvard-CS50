#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define arraySize 100

int main ( int argc, char *argv[] ){

    char myVar[arraySize];
    char myChar;
    char vingere[arraySize];
    int key;
    int cipher;


    int caesar;
    if ( argc != 2 || !isalpha(argv[1]) ){
        printf( "usage: %s filename\n", argv[0] );
        return 1;
    } else {
        strcpy(vingere, argv[1]);
        printf("plaintext: ");
        scanf ("%[^\n]%*c", myVar);
        printf("ciphertext: ");

        // iterate over the string
        for(int i = 0, j = 0, myLen = strlen(myVar); i < myLen; i++){
            
            if(myVar[i] > strlen(vingere)){
                j = 0;
            }
            if(myVar[i] == ' '){
                j -=1;
            }
            key = vingere[j];
           if((myVar[i] >= 'a') && (myVar[i] <= 'z')){
               cipher = myVar[i] + key;
              if(cipher > 'z'){
                printf("%c", (char)cipher - 26);
              } else if (cipher < 'a'){
                printf("%c", (char)cipher + 26);
              } else {
                  printf("%c", (char)cipher);
              }
        
           }else if((myVar[i] >= 'A') && (myVar[i] <= 'Z')){
               cipher = myVar[i] + key;
              if(cipher > 'Z'){
                printf("%c", (char)cipher - 26);
              } else if (caesar < 'A'){
                printf("%c", (char)cipher + 26);
              } else {
                  printf("%c", (char)cipher);
              }
           }else{
               printf("%c", myVar[i]);
           }
            j++;
        }
    }
    printf("\n");
}