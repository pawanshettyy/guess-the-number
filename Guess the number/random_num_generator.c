#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100 + 1; //random number bw 1 to 100
    //printf("Number is %d\n", number);

    do{
        printf("Guess Number b/w 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("lower number please\n");
        }
        else if(guess<number){
            printf("Higher number please\n");
        }
        else{
            printf("You guessed in %d attempts\n", nguesses);
        }
        nguesses++;
    }while(guess!=number);

    return 0;
}