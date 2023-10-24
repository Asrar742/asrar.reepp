// write a function that prints namaste if user is indian and bonjour if the user is french.
#include<stdio.h>

void namaste();
void bonjour();

int main(){
    int  num;
    printf("Enter 1 for indian & 2 for french\n ");
    scanf("%d",&num);
    if (num == 1){
    namaste();
    }else{
    bonjour();
    }
    return 0;
}

void namaste(){
    printf("namaste");
} 
void bonjour(){
    printf("bonjour");
    
}