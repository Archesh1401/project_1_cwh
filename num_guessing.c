#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int no_of_guess =0;
    int guessed;
    int randomNumber=(rand()%100)+1;
    do{
        printf("Guess the number ");
        scanf("%d",& guessed);
        if(guessed>randomNumber){
            printf("guess a lower number");
            no_of_guess++;
        }
        else if (guessed<randomNumber){
            printf("guess a higher number");
            no_of_guess++;
        }
    }
    while(guessed !=randomNumber);
    printf("you guessed the number in %d guesses", no_of_guess);
     
    return 0;
}