#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int randomNumber=(rand()%100)+1;
    printf("Random number is: %d\n ",randomNumber);
     
    return 0;
}