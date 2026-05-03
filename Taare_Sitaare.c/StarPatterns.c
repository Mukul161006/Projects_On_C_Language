#include<stdio.h>

int main(){

// We will try to print the star patterns using Loops and conditions. 

    int r,c,n;

    printf("How many rows do you want ?? ");
    scanf("%d",&n);


// Basic standard Pattern 
  /* for(r=1;r<=n;r++){
        
        for(c=1;c<=r;c++){
           printf("*");
        }
        printf("\n");
    }

printf("\n\n"); 

// Vertical Flip of Basic standard Pattern
    for(r=n;r>=1;r--){
        
        for(c=1;c<=r;c++){
            printf("*");
        }
        printf("\n");
    }

printf("\n\n");

// Flip on Horizontal Axis of basic standard pattern
    for(r=0;r<n;r++){

        for(c=0;c<n;c++){
            if( r+c >= n-1){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

printf("\n\n"); 

// Inverse of Horizontal Flip of Basic Std Ptrn
    for(r=0;r<n;r++){

        for(c=0;c<n;c++){
            if(c>=r){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

printf("\n\n");

// L pattern star 
    for(r=1;r<n;r++){
        printf("*\n");
    }
    for(c=1;c<=n;c++){
        printf("*");
    }

printf("\n\n");

// Star Box Pattern
    for(r=1;r<=n;r++){
        
        for(c=1;c<=n;c++){
            if(c==1||c==n||r==1||r==n){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    

//printf("\n\n"); 
*/

// Pyramid Pattern
for(r=1;r<=n;r++){

    for(c=1; c <= 2*n-1; c++){
        if( c >= n-(r-1) && c <= n+(r-1) ){
            printf("*");
        } else {
            printf(" ");
        }
    }
    printf("\n");
}

printf("\n\n"); 

//X star Pattern




    return 0; 
}