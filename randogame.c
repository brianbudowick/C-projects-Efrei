#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//guessing game where the computer selects random number (int) between 1 (Min) and 100(Max) and the player guesses a number (scanf) with the computer supplying feedback (printf) of "too high"
// "too low" for incorrect guesses and "you got it"  if they guess correctly\\ 

//generate a random number
int main()
{
srand(time(0));

int lower = 1, upper = 100, count = 1;
int pg;
int num;


    //printf("The random number is: ");
    for (int i = 0; i < count; i++) {
        int num = (rand() % (upper - lower + 1)) + lower;//random number =num 
        //printf("%d ", num);
        {
    
    printf("Select a number\n");//promt the user to enter a number 
    scanf("%d",&pg);//stores guess in pg
        }

    if (pg<num)
    {
        printf("Your number is too low");
        cg=false;
    }
    
    else if(pg>num);
    {
        printf("Your number is too high");
        cg=false;
    }
    else{
        printf("You got it!")
    }

    return 0;
}




//keep track of the number of guesses 

//when the player guesses correctly dispay the "you got it message" and number of guesses