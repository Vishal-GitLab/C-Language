#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    // if(n%5==0 || n%3==0){
    //     if(n%15!=0){
    //         printf("the number is divisile by 5 or 3 but not fifteen");

    //     }
    //     else{
    //         printf("the number is divisible by 15");

    //     }

    // }
    if((n%5==0 || n%3==0) && n%15!=0){
        printf("the number is divisible by 5 or 3 but not fifteen");

    }
    else{
        printf("the number is not matching the required condition");

    }

    return 0;

}