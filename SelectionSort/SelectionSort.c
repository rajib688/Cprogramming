#include "stdio.h"
int main()
{
    int n,arr[100],i,j, temp;
    printf("Enter your number : ");
    scanf("%d",&n);
    printf("Enter your elements list: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        for(int i=j+1;i<n;i++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("your sorted List : ");
    for(i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
    return 0;
}
