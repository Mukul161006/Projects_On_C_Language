#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/* Calling the getday() function from time header file and then storing its returning value into variable int wday (week day). 
here we created pointer of char to bring the address of the value which we received in the wday. 
keval char string nhi laa skta isliye apn ne address manga liya pointer use krke aur firr return ki madad se poori string print ho jayegi. */
char* getDay(int wday) { 
    switch (wday) {
        case 0 : return "Sunday"; 
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        case 4: return "Thursday";
        case 5: return "Friday";
        case 6: return "Saturday";
        default: return "Unknown";
    }                    
}

int main(){

    time_t now = time(NULL); // Yha se long machine readable value aayi time ki. 
    struct tm *time = localtime(&now); // yha pr uss value ko separate kra shi tareeke se using 2 things pehla toh struct tm and another being a function called localtime jo actually mai separate krte hai digits string mai se. 

    // Date and Time formatting. 
    char date_string[50];
    char time_string[50];

    strftime(date_string, 50, "%d-%m-%Y", time); // format is date then month then year
    strftime(time_string, 50, "%I-%M-%p", time); // I for 12 hour format, M for minutes, p for am/pm

    /* strftime ek form fillup karne wala babu hai

    date_string/time_string   → khali form jisme fill karna hai
    50          → form mein max 30 characters ki jagah hai
    "%d-%m-%Y"  → format batao — din pehle, mahina baad, saal last
    time        → data kahan se lena hai — struct tm se ✅ */

    // It will call the weekday's address and will store in our variable pointer day jinka kaam yee address store krne ka hota hai. 
    char *day = getDay(time -> tm_wday);

    // now file opening and all those shits. 
    FILE *file_open = fopen("startup_logs.txt", "a");

    if ( file_open == NULL ){
        printf("The file doesn't exists yet");
        return 1;
    }

    fprintf(file_open, "%s | %s | %s System Started.\n",date_string, day, time_string);
    fclose(file_open);

    // Now the main printing part the actually displaying shit in the terminal. 
    printf("\n");
    printf("===========================\n");
    printf(" STARTUP LOG FOR TODAY IS \n");
    printf("===========================\n");
    printf("Day : %s\n",day);
    printf("Date : %s\n",date_string);
    printf("Time : %s\n",time_string);
    printf("These details are saved suck..sex..fully !!\n");
    printf("Press enter to close....");
    getchar();

    return 0;
}
