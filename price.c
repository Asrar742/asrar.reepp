#include<stdio.h>
#include<math.h>

void calculateprice( float value);
int main(){
    float value = 100.0;
     calculateprice(value);
    printf("value is %f : ",value); // we cahnge value of "value" in def but doesnot reflect to arg. 
    return 0;
    

}


void calculateprice( float value){
    value = value + (.18*value); // change in parameter doesnot reflect to argument 
    printf("value is %f : ",value);
} 
