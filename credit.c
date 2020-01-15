//Current progress for CS50 credit.c

#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool card_length(long card_num);
long long_length(long cardnumber);

int main(void)
{
    long cardnumber;
    long cardreturn;
    do
    {
        cardnumber = get_long("Number: ");
        
        cardreturn = long_length(cardnumber);
    }
    while (cardnumber < 0);
    printf("%lu\n", cardreturn);
} 

bool card_length(long card_num)
{
    if (card_num == 1)
    {
        return true;
    }
    else
    {
        return false;
    }    
}

long long_length(long cardnumber)
{
    if (cardnumber >= 1000000000000000)
    {
        return 16;
    }
    else if (cardnumber >= 100000000000000)
    {
        return 15;
    }
    else if (cardnumber >= 10000000000000)
    {
        return 14;
    }
    else if (cardnumber >= 1000000000000)
    {
        return 13;
    }
    else if (cardnumber >= 100000000000)
    {
        return 12;
    }
    else if (cardnumber >= 10000000000)
    {
        return 11;
    }
    else if (cardnumber >= 1000000000)
    {
        return 10;
    }
    else if (cardnumber >= 100000000)
    {
        return 9;
    }
    else if (cardnumber >= 10000000)
    {
        return 8;
    }
    else if (cardnumber >= 1000000)
    {
        return 7;
    }
    else if (cardnumber >= 100000)
    {
        return 6;
    }
    else if (cardnumber >= 10000)
    {
        return 5;
    }
    else if (cardnumber >= 1000)
    {
        return 4;
    }
    else if (cardnumber >= 100)
    {
        return 3;
    }
    else if (cardnumber >= 10)
    {
        return 2;
    }
    else if (cardnumber >= 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
