#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, string argv[])
{

    //To generate an error message for wrong input
    if (argc != 2)
    {
        printf("Usage : ./caesar key\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage:./caesar key\n");
            return 1;
        }
    }
    //Prompt user to get the key.

    int k = atoi(argv[1]);
    //Prompt user to get the plaintext

    string plaintext = get_string("Plaintext: ");
    printf("Ciphertext: ");

    //To check the type caes of the plaintext.
    for (int j = 0; j < strlen(plaintext); j++)
    {
        if (isupper(plaintext[j]))
        {
            printf("%c", (plaintext[j] - 65 + k) % 26 + 65);
        }

        else if (islower(plaintext[j]))
        {
            printf("%c", (plaintext[j] - 97 + k) % 26 + 97);
        }
        else
        {
            printf("%c", plaintext[j]);
        }
    }

    //To move the cursor to next line.

    printf("\n");
}
