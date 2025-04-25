#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int b;
    printf("Enter a number:");
    scanf("%d",&b);
    int temp;
     temp =a;
      a=b;
      b=temp;
      printf(" the value of is %d",a);
      printf("\n");
      printf(" the value of is %d",b);
    return 0;
}