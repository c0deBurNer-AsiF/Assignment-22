/*1. Define a function to input variable length string and store it in an array without
memory wastage.*/

#include<stdio.h>
#include<stdlib.h>
void display(char *);
char* input();
int main()
{
   char *q;
   q=input();
   display(q);
   return 0;
}
char* input()
{
    printf("enter the size of string:\n");
    int n;
    scanf("%d",&n);
    printf("enter a word or name:\n");
    char *p;
    p=(char*)calloc(n,sizeof(char));
    fflush(stdin);
    fgets(p,n,stdin);

    return p;
}
void display(char *s)
{
    printf("%s",s);
    free(s);
}
