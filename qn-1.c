/*1. Define a function to input variable length string and store it in an array without
memory wastage.

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
}*/


/*1. Define a function to input variable length string and store it in an array without
memory wastage.*/

#include<stdio.h>
#include<stdlib.h>
char* input();
void display(char *);
int main()
{
    char *p;
    p=input();
    display(p);
}
char* input()
{
    char *q,c;
    printf("Enter the string:\n");
    q=(char*)malloc(sizeof(char));

    int i=0,j=1;
    while(c!='\n')
    {
        c=getc(stdin);
        j++;
        q=(char*)realloc(q,j*sizeof(char));
        q[i]=c;
        i++;
    }
    q[i]='\0';
    return q;
}
void display(char *r)
{
    printf("The string is: %s",r);
    free(r);
}

