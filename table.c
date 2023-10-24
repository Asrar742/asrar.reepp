#include<stdio.h>
#include<math.h>

void printTable(int n);

int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printTable(n);//argument/ actual paramter
    return 0;

}

void printTable(int n) { // formal perameter
    for(int i=1; i<=10; i++){
    printf("%d\n",i*n);
    }
}

