#include<stdio.h>
int main()
{
    int a[100],n,key,i;

    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to search");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("element found at position %d",i+1);

        }
    }
    printf("element not found");

    return 0;
}
