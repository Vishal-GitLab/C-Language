#include<stdio.h>
int main(){
    int arr[7]={-10,-30,-12,-5,-70,-56,-8};
    int max=arr[0];
    for(int i=1;i<7;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}