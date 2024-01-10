/*2. Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.*/

#include<stdio.h>
#include<stdlib.h>
void input();
int main()
{
    input();

    return 0;
}
void input()
{
    int i,n,*p;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    printf("enter %d numbers\n",n);
    p=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",(p+i));

    float avg=0;
    for(i=0;i<n;i++)
        avg=avg+p[i];

    printf("The average of this array is %.2f",avg/n*1.0);

}
