#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
         int a=1;
        
            int d=a+64; // d=65
              char ch= (char)d;  // ch=(char)65 ->='A'
               printf("%c",ch);
               a++;
        }
        printf("\n");
        }
    return 0;
}