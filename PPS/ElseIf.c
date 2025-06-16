#include<stdio.h>
int main(){
    int n;
    printf("Enetr a number: ");
    scanf("%d",&n);
    if(n>80){
        printf("A Grade");
    }
    else{
        if(n>60){
            printf("B Grade");
        }
        else{
            if(n>40){
                printf("C Grade");
            }
            else{
                printf("D Grade");
            }
        }
    }
    return 0;
}