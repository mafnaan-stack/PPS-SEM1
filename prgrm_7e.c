#include<stdio.h>
int main()
{
    int A[100],N,i,key;
    int low,high,mid,found=0;

    printf("enter the size of N elements");
    scanf("%d",&N);

    printf("enter %d values in sorted order:\n",N);

    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Array is\n");

    for(i=0;i<N;i++)
    {
        printf("%d",A[i]);
    }

    printf("\nEnter key value to find:");
    scanf("%d",&key);

    low=0;
    high=N-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(A[mid]==key)
        {
            found=1;
            printf("value find at %d positions\n",mid+1);
            break;
        }
    }
    else if(key<A[mid])
    {
        low=mid+1;
    }
      else
    {
        high=mid-1;
    }
   }
    if(found==0)
        printf("value not found\n");

        return 0;
}
