//8. Write a program to demonstrate dangling pointers in C.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=NULL;
    p=(int*)malloc(sizeof (int));

    free(p);
    if(p==NULL)
        printf("its not a dangling pointer");
    else
        printf("its a dangling pointer");
}
