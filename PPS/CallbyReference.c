#include<stdio.h>
void update(int *p){
      *p=*p+5;
    }
int main(){
    int x=10;
    update(&x);
    printf("%d",x);
    return 0;
}