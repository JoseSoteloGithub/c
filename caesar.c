// for CS50 caesar.c

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    
    // Checks for the argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    // Argument vector length as integer variable
    int string_length = strlen(argv[1]);
    
    int cipher;
    
    // Loop through each argument character and check it for digits
    for (int i = 0; i < string_length; ++i)
    {
        if (argv[1][i] < 47 || argv[1][i] > 57)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        else
        {
            // Convert argument into an integer
            cipher = atoi(argv[1]);
        }
    }
    
    string plaintext = get_string("plaintext: ");
    int plaintextlength = strlen(plaintext);
    
    printf("ciphertext: ");
    
    for (int i = 0; i < plaintextlength; ++i)
    {
        if (isupper(plaintext[i]))
        {
            printf("%c", (((plaintext[i] - 65) + cipher) % 26) + 65);
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", (((plaintext[i] - 97) + cipher) % 26) + 97);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}
