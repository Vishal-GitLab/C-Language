#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("Enter  Second Number : ");
    scanf("%d",&b);
    printf("Enter Third Number : ");
    scanf("%d",&c);
    
    if(a>b && a>c){
        printf("%d is Greatest" ,a);
    }
    if(b>a && b>c){
        printf("%d is Greatest",b);
    }
     if(c>a && c>b){
        printf("%d is Greatest",c);
    }

    return 0;

}
    