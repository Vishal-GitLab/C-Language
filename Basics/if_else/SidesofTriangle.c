#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf(" Enter first sides  : ");
    scanf("%d",&a);
    printf(" Enter second sides  : ");
    scanf("%d",&b);
    printf(" Enter third sides  : ");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (a+c)>b){
        printf("Vailid triangle");
        
    }
    else{
        printf("Invailid triangle");
    }
    
    return 0;
}