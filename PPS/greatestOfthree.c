#include<stdio.h>
int main(){
    int a;
    printf("Enter a first number:");
    scanf("%d",&a);
    int b;
    printf("Enter a second number:");
    scanf("%d",&b);
    int c;
    printf("Enter a third number:");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("First number is greatest %d",a);
    }
    if(b>a && b>c){
        printf("Second number is greatest %d",b);
    }
    if(c>a && c>b){
        printf("Third number is greatest %d",c);
    }
    return 0;
}