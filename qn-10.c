/*10. Find out the maximum and minimum from an array using dynamic memory allocation
in C.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,n,j,m;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);

    printf("Enter %d numbers:\n",n);

    p=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",(p+i));

    for(i=0;i<n;i++)
    {
        for(j=1+i;j<n;j++)
        {
            if(*(p+i)<*(p+j))
            {
                m=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=m;
            }
        }
    }
    printf("The maximum number is:%d\n",*(p+0));
    printf("The minimum number is:%d",*(p+n-1));
}
