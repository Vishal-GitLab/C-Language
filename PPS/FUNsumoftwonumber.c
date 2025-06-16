#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int a; 
    printf("Enetr a number: ");
    scanf("%d",&a);
    int b; 
    printf("Enetr a number: ");
    scanf("%d",&b);
    int sum=add(a,b);
    printf("%d",sum);
    
    return 0;
}