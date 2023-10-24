#include<stdio.h>
#include<math.h>

int sum(int a, int b); // inta,intb are paratmeres
int main(){
    int a,b;
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("Enter second number\n");    
    scanf("%d",&b);
    int s = sum(a,b);// call sum
    printf("sum is %d  ",s);
    return 0;

}
int sum(int a,int b){ // return type is int 
    return  a + b; 
}
