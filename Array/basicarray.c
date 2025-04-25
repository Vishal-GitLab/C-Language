#include<stdio.h>
int main(){
   //int arr[5];
     //arr[0]=2;
     //arr[1]=3;
     //arr[2]=4;
     //arr[3]=6;
    // int arr[4]={1,2,3,4,};
    //printf("%d",arr[2]);
    int arr[5];
    for( int i=0;i<=4;i++){
    printf("\nEnter element  number %d", i+1);
    scanf("%d",&arr[i]);
    }

    for( int i=0;i<5;i++){
    printf("%d",arr[i]);
    }
    return 0;
}
