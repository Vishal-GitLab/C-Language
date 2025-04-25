#include<stdio.h>
int main(){
    int arr[7]={-10,-30,-5,-70,-56,-44,-56};
    int min=arr[0];
    for(int i=6;i>=0;i--){
        if(min<arr[i]){
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}