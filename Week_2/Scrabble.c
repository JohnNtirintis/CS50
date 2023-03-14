#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Global array Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);


    (score1 > score2) ? printf("Player 1 wins!\n")
    : (score1 < score2) ? printf("Player 2 wins!\n")
    : (score1 == score2) ? printf("Tie!\n")
    : printf("Error!");
}

int compute_score(string word)
{
    //VAR to keep track of score
    int score = 0;
    for(int i = 0, len = strlen(word); i < len; i++){
        if(isupper(word[i])){
            //Using ASCII char A(aka number 65) to find the index of the character
            //I.e. A(65) - Z(90) = 25
            //The 25th letter of the alphabet is Z.
            score += POINTS[word[i] - 'A'];
        }
        else if(islower(word[i])){
            score += POINTS[word[i] - 'a'];
        }
    }
    return score;

}
