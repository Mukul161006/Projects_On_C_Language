#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int hint(int hint_request);

int main(){

int number, guess, attempts = 0, hint;
srand(time(NULL));

    number = rand() % 100 + 1; // Random number between 1 and 100

    // Basic stuffs For each run. 
    printf("------------------------------------\n");
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100. Can you guess it?\n");
   

    // do while pehle toh ek simple task baar baar krayegi then beech mai hints ka kaam kregi. 
    // Isme nested loops hai kaafi saari if-else ki. 
    do{
        printf("\nEnter your guess \n");
        scanf("%d",&guess);
        attempts++;

        if(attempts == 3){

            printf("(If you need any help then -> Type 911 for hint.)\n (Aur nhi chaiye ho toh type krta reh guess !!!)\n");
            scanf("%d",&hint);
            
            if(hint == 911){

                if(number % 2 == 0){
                printf("Even No. hai bhai !!\n");
                } else {
                printf("Odd no. hai bhidu !!\n");
                }

                //int hint(number);
                continue ;

            }
    }

        if(guess < number){
            printf("\nThoda bdaa soch bhai.");

        } else if (guess > number) {
            printf("\nAukaat baar mt soch.");

        } else {
            printf("\nCongragulations!! You have successfully guessed the number in %d attempts.",attempts);

        }
        
    } while (guess != number);

    // Ending stuffs. 
    printf("\nThank You for playing. \nDeveloped By MP Singh.");
    printf("\n\n");

    return 0;
}

//Function ka try ek baari -------------
/*int hint(int hint_request){
    
    if(hint_request % 2 == 0){
    printf("Even No. hai bhai !!\n");
    } else {
    printf("Odd no. hai bhidu !!\n");
    }

}*/