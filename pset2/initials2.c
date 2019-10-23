#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <getopt.h>

int str_cut(char *str, int begin, int len);

int main(){

    int z;
    char name[100];
    char i = name[0];
    puts("Enter your name:");

    scanf ("%[^\n]%*c", name);
    printf("%c", name[0]);
    for (int j = 0, y = strlen(name); j < y; j++){


      if (name[j] == ' '){
        z = j + 1;
        printf("%c", name[z]);
      }

    }
    printf("\n");
}

int str_cut(char *str, int begin, int len)
{
    int l = strlen(str);

    if (len < 0) len = l - begin;
    if (begin + len > l) len = l - begin;
    memmove(str + begin, str + begin + len, l - len + 1);

    return len;
}
