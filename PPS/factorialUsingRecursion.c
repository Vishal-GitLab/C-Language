#include<stdio.h>
int factorial (int n){
    if(n==0 || n==1)  return 1;
    return n*factorial(n-1);
}
int main(){
   int n;
   printf("Enter a number :");
   scanf("%d",&n);
   int fact = factorial(n);
   printf("%d",fact);
    return 0;
}
// int factorial(int n){
//  if(n==0 || n==1) return 1;
//  else
//       return n*factorial(n-1);
// }
// int main(){
//     int num=5;
//     printf("Factorial of %d is %d\n",num,factorial(num));
//  return 0;
// }