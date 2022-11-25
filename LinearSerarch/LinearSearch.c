#include<stdio.h>
int main()
{
    int i,n,key,loc,ck,a[100];
    printf("Please enter the How many number: ");
    scanf("%d",&n);
    printf("The total element of number: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key values: ");
    scanf("%d",&key);
    ck=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            ck=1;
            loc=i+1;
            break;
        }
    }
    if(ck==1)
    {
        printf("The key is %d the found location %d ", key, loc);
    }
    else
    {
        printf("NO");
    }
    return 0;
}
