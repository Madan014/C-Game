#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess, nguesses=1;
    srand(time(0));
    number= rand()%100+1;// Generte the random number between 1 to 100
    // printf("The number is %d ",number);
    //Keep running the loop until the number is generated
    do{
       printf("Guess the number between 1 to 100\n");
       scanf("%d",&guess);
       if(guess>number){
           printf("Lower number please\n");
       }else if(guess<number)
       {
           printf("Heigher number please\n");
       }
       else{
           printf("You guesses it in %d attempts\n",nguesses);
       }
       nguesses++;



    }while(guess!=number);
    return 0;
}