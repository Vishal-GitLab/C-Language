#include<stdio.h>
#include<string.h>
    struct Student{
        int rollNo;
        char name[50];
        float marks;
    };
    int main(){
        struct Student s1;
        s1.rollNo = 101;
        strcpy(s1.name,"Vishal");
        s1.marks=92.5;

        printf("rollNo: %d\n",s1.rollNo);
          printf("name: %s\n",s1.name);
            printf("marks: %2f\n",s1.marks);
    return 0;
}