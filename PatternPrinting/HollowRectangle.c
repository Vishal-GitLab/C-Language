#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows :");
    scanf("%d",&n);
    int m;
    printf("Enter no.of colums :");
    scanf("%d",&m);
    int  a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a!==2) printf("%d",a);
            else  
            printf("*");
        }
        printf("\n");
    }
    return 0;

}