//6. Write a program in C to find the largest element using Dynamic Memory Allocation

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,n,j,k;
    printf("enter the size of an array:\n");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    printf("enter %d numbers:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",(p+i));

    for(i=0;i<n;i++)
    {
        for(j=1+i;j<n;j++)
        {
            if(p[i]<p[j])
            {
                k=p[i];
                p[i]=p[j];
                p[j]=k;
            }


        }
    }
    printf("largest element is %d",p[0]);

    free(p);
}
