#include <stdio.h>
/**
  *Greedy Algorithm
  */

int main(){
    int quarters = 0, dimes = 0, nickels = 0, cents = 0, mult = 100;
    float myInput, owed;

    do{
        puts("O hai! How much change is owed?");
        scanf("%f", &myInput);
        if(myInput < 0)
            puts("Retry!");

    }while(myInput < 0); //makes sure user enters right input

	owed = myInput * mult;
	printf("owed: %f\n", owed);
    //calculates quarters
    while(owed >= 25.0){
        quarters ++;
        owed = owed - 25.0;
    }
    printf("quarters: %f owed: %f\n",quarters, owed);
    //calculates dimes
    while(owed >=10.0){
        dimes ++;
        owed = owed - 10.0;
    }
    printf("dimes: %f owed: %f\n", dimes, owed);
    //calculates nickels
    while(owed >= 5.0){
        nickels ++;
        owed = owed - 5.0;
    }
    printf("nickels: %f owed: %f\n",nickels, owed);
    //calculates cents
    while(owed >= 1){
        cents ++;
        owed = owed - 1.0;
    }
    printf("cents: %f owed: %f\n",cents, owed);

    printf("%d\n", quarters + dimes + nickels + cents);


}
