#include <stdio.h>
#include <float.h>
#include <stdbool.h>

bool valid_triangle(float a, float b, float c);
float get_input(void);


int main(void){
	bool answer;
	puts("You will enter three real numbers\nand decide if it can form a triangle");
	puts("With those three values");
  answer = valid_triangle(get_input(), get_input(), get_input());
  printf("%i\n", answer);


}

bool valid_triangle(float a, float b, float c){
  if (a <= 0 || b <= 0 || c <= 0)
    return false;

  else if ((a + b <= c) || (a + c <= b) || (b + c <= a))
    return false;

  else
    return true;
}

float get_input(void){
  float sides;
  puts("Enter a real number for one the triangle sides:");
  scanf("%f\n", &sides);
  return sides;
}


