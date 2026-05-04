#include<stdio.h> 
#include<time.h>
#include<stdlib.h>
#include<time.h>

int main(){

    FILE *ffp = fopen("daily_quotes.txt", "r"); 

    if( ffp == NULL){
        printf("daily_quotes.txt krke koi file nhi h bhai !!\n");
        printf("\nPress Enter to close...");
        getchar();
        return 1;
    }

    // Will check for whether the file is empty ot not ?? 
    fseek(ffp, 0, SEEK_END); // will move the cursor from some position 0 to END position in the file. 
    long int size = ftell(ffp); // ftell will tell the line position and will be act as size instead of real sizeof() function. 
    rewind(ffp); // Will put the cursor back to the beginning. 
    
    if ( size == 0 ){
        printf("You Have no written quotes for now.\n");
        fclose(ffp);
    } 

    char print_quote[501];
    int total_count = 0;
    int random = 0;

    // Loop to pull the characters until the NULL state i.e. \0 is achieved. 
    while(fgets(print_quote, 501, ffp) != NULL){  
            total_count++ ;
    }

    // Random digit generator but under our total quotes limit i.e. count
    srand(time(NULL));
    random = ( rand() % total_count ) + 1; 

    // to put the cursor back to the start which came to end while counting. 
    rewind(ffp);

    // Now code to make our cursor land on that random location.
    int current = 0;
    while(fgets(print_quote, 501, ffp) != NULL){
        current ++;
        if( random == current ){
            break;
        }
    }

    printf("\n");
    printf("============================\n");
    printf(" YOUR QUOTE FOR THE DAY IS \n");
    printf("============================\n");
    printf("\n");
    printf("\n%s\n",print_quote);
    printf("\nPress Enter to close...");
    getchar();

    return 0;
}