#include <math.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    float amount;
    int cents;
    do{
        printf("Please enter the number of cents: ");
        scanf("%f", &amount);
         if(amount <= .99f)
         {
            cents = (int)round(amount * 100);
         }
         else if(amount >= 1.00){
          cents = (int)amount;
         }
    }while(amount <= 0);

    return cents;
}

int calculate_quarters(int cents)
{
    int change_left = cents;
    int count_quarters = 0;
    while(change_left >= 25){
        count_quarters++;
        change_left -= 25;
    }
    return count_quarters;
}

int calculate_dimes(int cents)
{
    int change_left = cents;
    int count_dimes = 0;
    while(change_left >= 10){
        count_dimes ++;
        change_left -= 10;
    }
    return count_dimes;
}

int calculate_nickels(int cents)
{
    int change_left = cents;
    int count_nickels = 0;
    while(change_left >= 5){
        count_nickels++;
        change_left -= 5;
    }
    return count_nickels;
}

int calculate_pennies(int cents)
{
    int change_left = cents;
    int count_cents = 0;
    while(change_left>= 1){
        count_cents++;
        change_left -= 1;
}
    return count_cents;
}