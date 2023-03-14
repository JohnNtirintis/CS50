#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;

    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name){
    //Iterates through the struct candidates, checking if their names
    //are equal to the name inputted by the user
    for(int i = 0; i < candidate_count; i++){
        //strcmp returns a negative value if true
        if(strcmp(name, candidates[i].name) == 0){
            candidates[i].votes++;
            return true;
        }
    }
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    int count = 0;
    int max = 0;
    int index = -1;
    //Checks to see the max votes and it also saves
    //the index of the candidate with the most votes.
    for(int i = 0; i < candidate_count; i++){
        if(candidates[i].votes > max){
            max = candidates[i].votes;
            index = i;
        }
    }
     //Checks to see if there's a tie
    for(int i = 0; i < candidate_count; i++){
        if(candidates[i].votes == max){
            count++;
        }
    }
    //If there is a tie, print all the candidates that are tied
    if(count > 1){
        for(int i = 0; i < candidate_count; i++){
            if(candidates[i].votes >= max){
                printf("%s\n",candidates[i].name);
            }
        }
    }
    //If no tie then print the candidate with most votes
    else{
        printf("%s\n", candidates[index].name);
    }
    return;
}
