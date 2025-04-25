#include<stdio.h>
int main(){
    int n;
    printf("Enter the leap year");
    scanf("%d",&n);
    if(n%4==0){
        printf("The leap year");
    }
    else{
        printf(" Not leap year ");
    }

    return 0;
}