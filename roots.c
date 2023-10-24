#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    float x,ans1,ans2;

    printf("enter the coefficient of x^2");
    scanf("%d",&a);
    printf("enter the coefficient of x");
    scanf("%d",&b);
    printf("enter the constant term");

    scanf("%d",&c);
x = pow(b,2) - 4*a*c;
x = pow(x,1/2);
ans1 = (-b+x)/(2*a);
ans2 = (-b-x)/(2*a); 
printf("the roots of the quadratic equation are %f%f",ans1,ans2);   
    
    

    
}