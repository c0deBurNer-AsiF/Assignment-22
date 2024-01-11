/*5. Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i,sum=0;
    printf("enter the size of an array:\n");
    scanf("%d",&n);
    printf("enter %d numbers:\n",n);
    p=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",(p+i));

    for(i=0;i<n;i++)
        printf("%d ",p[i]);


    for(i=0;i<n;i++)
        sum=sum+p[i];

    printf("\n");
    printf("sum of all elements are: %d",sum);
    return 0;
}
