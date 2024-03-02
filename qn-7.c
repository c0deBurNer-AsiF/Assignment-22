//7. Write a program to demonstrate memory leak in C.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=NULL;


    (int*)calloc(5,sizeof(int));

    if(p==NULL)
            printf("Its a memory leak");
    else
        printf("Its not a memory leak");

}
