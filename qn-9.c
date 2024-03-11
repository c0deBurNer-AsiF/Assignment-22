/*9. Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,n;
    p=NULL;
    printf("Enter the size of an array in bytes:\n");
    scanf("%d",&n);
    printf("Enter %d numbers\n",n/4);
    p=(int*)calloc(n,sizeof(int));

    for(i=0;i<n/4;i++)
    {
        scanf("%d",(p+i));
    }

    if(p==NULL)
    {
        printf("Memory Allocation is failed\n");
        return 0;
    }


}
