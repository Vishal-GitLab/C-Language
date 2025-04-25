#include<stdio.h>
int main(){
    int n;
    printf("Enter a number of row :");
    scanf("%d",&n);
    int m;
    printf("Enter a number of colomn :");
    scanf("%d",&m);
    // **********.... upto n of stars
    for(int i=1;i<=n;i++){ //outer loop -> no of lines
        for(int i=1;i<=m;i++){ // inner loop stars in each line
        printf("*");
    }
    printf("\n"); // har lline ke baad ak enter marne ke liye hota hai 
}

    return 0;
}