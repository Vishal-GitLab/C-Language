#include<stdio.h>
int main(){
    int n;
    printf("Enetr a number :");
    scanf("%d",&n);
    int nst=n;
    int nsp=0;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=nsp;j++){ // spaces
            printf(" ");
        }
        for(int k=1;k<=nst;k++){ // stars
            printf("*");
        }
        nsp++;
        nst--;
        printf("\n");
    }
    return 0;
}
