#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter the age of Ram : ");
    scanf("%d"&a);
    printf("Enter the age of Shyam : ");
    scanf("%d",&b);
    printf("Enter the age of Ajay : ");
    scanf("%d",&c);
    if(a<b && a<c ){
        printf("%d is youngest ",a);
    }
    if(b<a && b<c ){
        printf("%d is youngest ",b);
    }
    if(c<b && c<a ){
        printf("%d is youngest ",c);
    }

    return 0;

}