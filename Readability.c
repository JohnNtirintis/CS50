#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string s = get_string("Text: ");
    double words = 0;
    double letters = 0;
    int len = strlen(s);
    int sentences = 0;
    double average_letters = 0;
    double average_sentences = 0;
    double grade;

    for(int i = 0; i < len; i++){
        if(s[i] == 32 || (s[i] == 33 && s[i + 1] != 32) || (s[i] == 46 && s[i + 1] != 32 && s[i + 1] != 46) || (s[i] == 63 && s[i + 1] != 32) ){
            words++;
        }
     }

    for(int i = 0; i < len; i++){
        if(s[i] != 32 && s[i] != 33 && s[i] != 46 && s[i] != 39 && s[i] != 44 && s[i] != 34 && s[i] != 63){
            letters++;
        }
    }

    for(int i = 0; i < len; i++){
       if(s[i] == 33 || s[i] == 63 || (s[i] == 46 && s[i + 1] != 46)){
            sentences++;
        }
    }

     average_letters =  letters/words * 100;
     average_sentences =  sentences/words * 100;

    grade = round(0.0588 * average_letters - 0.296 * average_sentences - 15.8);

    if(grade >= 16){
        printf("Grade 16+\n");
    }
    else if(grade < 1){
        printf("Before Grade 1\n");
    }
    else{
        printf("Grade %.0f\n", grade);
    }

}
