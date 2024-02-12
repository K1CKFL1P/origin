/////////////////////////////////////////////////////////////////////
// Name: Charles Norton
// Date: 20240116
// Prof: Prof. Kandalaft
// Assignment: HW 1
// Description: This program receives an input of a base 10 number
//              from the user and returns the value in base 16
/////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int errorCheck(void);

int main(void){
int userNum; //stores user number returned from the error checking function


printf("Enter a number between 0 and 65535\n");

userNum = errorCheck();

printf("\nYour number is %x in base 16\n" ,userNum);

return 0;
}
/////////////////////////////////////////////////////////////////////
// Function: Error Checking
// Description: This function throws an error to the user if the
//              value entered is not within the specified range
//              or if a character is entered instead of a value
/////////////////////////////////////////////////////////////////////
int errorCheck(void){
int check = 0;
int userNum = 0;
check = scanf("%d", &userNum);

if(userNum<0 || userNum>65535){
    check = 0;}

    while(!check){
        printf("\aInvalid entry, please try again\n");
        while(getchar()!='\n');
        check = scanf("%d", &userNum);

        if(userNum<0 || userNum>65535){
        check = 0;}
    }
    return userNum;
}