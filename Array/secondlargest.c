#include<stdio.h>
#include<limits.h>
int main(){
    //int arr[7]={7,6,5,4,3,2,1};
    int arr[7]={1,2,3,4,4,2,1};
    int max = INT_MIN;
    int smax =INT_MIN;
    // for(int i=0;i<=6;i++){
    //     if(max<arr[i]){
    //         max = arr[i];
    //     }
    // }
    // //max = -4
    // for(int i=0;i<=6;i++){
    //     if(arr[i]!=max && smax<arr[i]){
    //         smax = arr[i];
    //     }
    // }
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            smax = max; // smax is now previous max
            max = arr[i]; // max is now a new max
        // }
        // if(smax<arr[i]&& max!=arr[i]){
        //     smax = arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax = arr[i];
        }

    }
    printf("%d",smax);
    return 0;
}