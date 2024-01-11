/*3. Write a program to calculate the sum of n numbers entered by the user using malloc
and free.*/

#include<stdio.h>
#include<stdlib.h>

void input();
int main()
{
    input();

}
void input()
{
    int n,*p,i;
    printf("Enter how many numbers sum u want:\n");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n);
    p=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",(p+i));

    int sum=0;
    for(i=0;i<n;i++)
        sum=sum+p[i];

    printf("sum of numbers %d",sum);

    free(p);


}
