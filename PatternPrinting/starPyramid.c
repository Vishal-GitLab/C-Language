#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of lines :");
    scanf("%d",&n);
    
    //for (int i=1; i<=n;i++){
     //   for(int j=1;j<=2*i-1;j++){
       //     printf("*");
        //}
       // printf("\n");
    //}
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){ // for spaces
          printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");

        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
}