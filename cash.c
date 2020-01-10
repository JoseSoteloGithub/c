#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    
    // float amt;
    int amt_process;
    do
    {
        float get_amt = get_float("Change owed: ");
        amt_process = round(get_amt * 100);
    }
    while (amt_process <= 0);
    
    int quarters = amt_process / 25;
    int remainder = amt_process % 25;
    // printf("Quarters: %i\nRemainder: %i\n", quarters, remainder);
    
    int dimes = remainder / 10;
    remainder = remainder % 10;
    // printf("Dimes: %i\nRemainder: %i\n", dimes, remainder);
    
    int nickles = remainder / 5;
    remainder = remainder % 5;
    // printf("Nickles: %i\nRemainder: %i\n", nickles, remainder);
    
    int pennies = remainder / 1;
    remainder = remainder % 1;
    // printf("Pennies: %i\nRemainder: %i\n", pennies, remainder);
    
    printf("%i\n", quarters + dimes + nickles + pennies);
    
}
