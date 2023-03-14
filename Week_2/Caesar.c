#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //Checking user inputted values correctly
    if(argc != 2){
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int argv_len = strlen(argv[1]);

     //Check to see if any input from the user is alphabetical.
    for(int i = 0; i < argv_len; i++){
         if(isalpha(argv[1][i])){
            printf("Usage: ./caesar key\n");
            return 1;
         }
    }

    //Converts to an int from ASCII to an actual int to use later on.
    int key = atoi(argv[1]) % 26;

    string text = get_string("plaintext: ");

    printf("ciphertext: ");


    int len = strlen(text);
    //Iterates through the text, checks to see if an element is alphabetical
    //If its not its printed as is i.e. question marks, commas etc.
    for(int i = 0; i < len; i++){
        if(!isalpha(text[i])){
            printf("%c", text[i]);
            continue;
        }

    //Checks element is upper using iternary operator.
    int offset = isupper(text[i]) ? 65 : 97;

    //Calculating letter distance based on ASCII Chard
    int pi = text[i] - offset;
    
    //Using the formula prodived to find the index of the letter
    int ci = (pi + key) % 26;

    //Changing the character based on the result of the formula used aboved
    //Prints ciphertext
    printf("%c", ci + offset);


    }
    //Check50 throws an error if there is no /n in the end.
    printf("\n");
    return 0;
}
