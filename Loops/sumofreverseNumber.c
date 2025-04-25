#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int r=0;
    while(n>0){
        r=r*10;
        r=r+(n%10);
        n= n/10;
        sum=r+n;
        
    }
    sum=r+n;
    
    printf("the sum of reversed number %d",r);

    return 0;