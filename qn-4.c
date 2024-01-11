//4. Write a program to input and print text using dynamic memory allocation.

#include<stdio.h>
#include<stdlib.h>
void input();
int main()
{
    input();
}
void input()
{
    int n;
    printf("Enter the size of the string:\n");
    scanf("%d",&n);
    printf("enter words or sentences:\n");
    char *p;
    p=(char*)malloc(sizeof(char)*n);

    fflush(stdin);
    fgets(p,n,stdin);

    printf("%s",p);
    
    free(p);

}
