#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=0;
    for(int i=1;i<=n-3;i++){
    sum=a+b;
    a=b;
    b=sum;
    }
    printf("the febonocci %d th series= %d",n,sum);
    return 0;
}