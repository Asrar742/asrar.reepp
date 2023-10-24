// write a function one to print hello and other says goodbye
#include<stdio.h>
// Declaration
void printhello();
void printgoodbye();

// calling
int main(){
    printhello();
    printgoodbye();
    return 0;}

//definition
    void printhello(){
         printf("hello\n");
    }
     
   
    void printgoodbye(){
        printf("goodbye");
    }
    // second    function goodbye will completley stop untill printhello will print
