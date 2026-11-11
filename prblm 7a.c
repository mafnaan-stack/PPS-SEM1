#include<stdio.h>
void main()
{

    int s[5],i,sum=0;
    printf("enter 5 value");
    for(i=0;i<5;i++)
        scanf("%d",&s[i]);

    for(i=0;i<5;i++)
        sum=sum+i;
    printf("sum=%d",sum);
}
