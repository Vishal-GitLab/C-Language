#include<stdio.h>
// int factorial(int x){
//     int fact =1;
//     for(int i=2;i<=x;i++){
//        fact= fact*i;
//     }
//     return fact;
//     }
//     int combination(int n, int r){
//         int ncr=factorial(n)/(factorial(r)*factorial(n-r));
//     }
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
   for(int i=0;i<=n;i++){
    for(int q=0;q<=2*n-i;q++)
        printf(" ");
        int first=1;
    for(int j=0;j<=i;j++){
        printf("%d ",first);
        first=first*(i-j)/(j+1);
    }
    printf("\n");
   }
    return 0;
}