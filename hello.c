#include <stdio.h>
#include <string.h>

int main(){

    char name[100];
    puts("Enter your name:");

    scanf ("%[^\n]%*c", &name);
    printf("%s\n", name);
}
