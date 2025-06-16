#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    fp= fopen("Example.text","r");
    if(fp== NULL){
        printf("Error opening file \n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF){
        putchar(ch);
    }
    fclose(fp);
return 0;
}