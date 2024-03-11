/*2. Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.*/

#include<stdio.h>
#include<stdlib.h>
float input();
int main()
{
    float r;

    r=input();
    printf("Average of the these numbers is: %.2f",r);

    return 0;
}
float input()
{
    int i,n,*p;
    p=NULL;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    printf("enter %d numbers\n",n);
    p=(int*)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("Memory Allocation failed\n");
        return 0;
    }
    for(i=0;i<n;i++)
        scanf("%d",(p+i));

    float avg=0;
    for(i=0;i<n;i++)
        avg=avg+p[i];

    return avg/n*1.0;
}
