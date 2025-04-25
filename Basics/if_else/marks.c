#include<stdint.h>
int main(){
    int n;
    printf("Enter the percentage : ");
    scanf("%d",&n);
    //more than 80 --> A garde
    //more than 60 --> B garde 
    //more than 40 --> C garde 
    //less than 40 --> D grade
    //if(n>80){
      //  printf("A grade\n");

    //}
    //else if(n>60){
     //   printf("B grade\n");
    //}
   // else if(n>40){
      //  printf("C grade\n");
    //}
   // else{
     //   printf("D grade\n");
    //}
    if(n>80){
        printf("A grade");
    }
    else{
        if(n>60){
            printf("B grade");

        }
        else{
            if(n>40){
                printf("C grade");
            }
            else{
                printf("D grade");
            }
        }
    }
    return 0;
}