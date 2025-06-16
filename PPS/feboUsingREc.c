#include<stdio.h>
int febo(int n){
    //if(n==0 || n==1){
    // return n;
    if(n<=2){
        return 1;
    }
    return febo(n-1) + febo(n-2);
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    //   febo= febo(n);
    printf("%d",febo(n-1));
    return 0;
}