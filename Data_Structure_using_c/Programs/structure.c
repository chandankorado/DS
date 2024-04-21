#include<stdio.h>

struct info
{
    int id;
    char name[50];
    float mark;
}e1, e2;
int main()
{
    e1. id = 840;
    strcpy(e1.name,"chandan");
    e1. mark = 45.4;
    
    e2. id = 849;
    strcpy(e2.name,"shan");
    e2. mark = 90.9;
    
    printf("%d\n%s\n%f",e1.id,e1.name,e1.mark);
    printf("%d\n%s\n%f",e2.id,e2.name,e2.mark);
    printf("Hello world!");
    return 0;
}