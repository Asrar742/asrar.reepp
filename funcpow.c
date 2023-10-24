#include<stdio.h>
   #include<math.h>
   int power(int,int);
   int main()
   {
     int a,b,ans;
     printf("enter the numbers");
     scanf("%d %d",&a,&b);
     ans=power(a,b);
     printf("%d",ans);
    return 0;
   }

int power(int x, int y)
{
int num = 1, i;
for (i = 1; i <= y; i++)
	num = num*x;
return(num);
}