#include <string.h>
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text:  ");

    int letters = 0 ;

    int words = 1 ;

    int sentences = 0 ;

    for (int i = 0; i < strlen(text); i++)
    {
        //To count the number of letters
        if (isalpha(text[i]))
        {
            letters++;
        }

        //To count the number of words
        else if (text[i] == ' ')
        {
            words++;
        }

        //To count the number of sentences
        else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }

    float L = (float) letters / (float) words * 100;
    float S = (float) sentences / (float) words * 100;

    //To count the index
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    //To print the results
    if (index < 1)
    {
        printf("Before Grade 1");
    }

    else if (index > 16)
    {
        printf("Grade 16+");
    }

    else
    {
        printf("Grade %i", index);
    }
    printf("\n");
}
