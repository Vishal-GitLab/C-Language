#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(n%5==0 && n%3==0){
        printf("Divisible by 5 :");
    }
    else{
        printf("Divisible by 3 :");
    }
        
    
    return 0;
}