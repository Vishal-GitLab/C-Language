#include<stdio.h>
int main(){
    int array1[3][3];
    int array2[3][3];
    int ResultArray[3][3];
    // input the array 
    // input element in first array
    for(int i =0; i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter  %d,%d element: ",i+1,j+1);
            scanf("%d",&array1[i][j]);
        }
    }
    //input element the second array
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter %d,%d element: ",i+1,j+1);
            scanf("%d",&array2[i][j]);
        }
    }

    for(int i=0; i<3;i++){
        // int sum=0;
        for(int j=0;j<3;j++){
            ResultArray[i][j]=array1[i][j]+ array2[i][j];
        }
    }
    //printf the resulting array
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",ResultArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}