#include <stdio.h>
#include <string.h>

int main(){
    
    //display mapping for undercase letters
    for (int i = 65; i < 65 + 26; i++ ){
        printf("%c : %i\n", (char) i, i);
    }
    //separate uppercase letters
    printf("\n");

    //lowercase
    for (int i = 97; i < 97 + 26; i++){
        printf("%c : %i\n", (char)i, i);
    }
}