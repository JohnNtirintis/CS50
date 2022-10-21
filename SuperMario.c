#include <stdio.h>

int main(void)
{
    int height = 8;
    
    for(int i = 0; i < height; i++){
        for(int j = height - 1; j > i; j--){
            /*This loop handles the spaces on the left side for the first pyramid.
            We know that the spaces required for the side are (height - 1) for it to be the correct and desired shape.*/
            printf(" ");
        }
        for(int k = 0; k <= i; k++){
            printf("#");
        }
        printf("  ");
        //The spaces in between the two pyramids are always in a fixed location.
        //So we dont need a loop for them.
        for(int w = 0; w <= i; w++){
            printf("#");
        }
    printf("\n");
    }

}