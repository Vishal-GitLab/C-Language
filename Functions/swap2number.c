#include<stdio.h>
int main(){
    int a;
    printf("Enetr a number :");
    scanf("%d",&a);
    int b;
    printf("Enetr a number:");
    scanf("%d",&b);
   // int temp;
    //temp =a;
    //a=b;
    //b=temp;
    a=a+b;
    b=a-b;
    a=a-b;                   // without using third variable
    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n",b);
    return 0;
}