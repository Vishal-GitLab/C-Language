#include<stdio.h.>
void changevalue(int x){
    x=100;
}
int main(){
      int a=50;
      changevalue(a);
      printf("Value of a: %d\n",a);
    return 0;

}
