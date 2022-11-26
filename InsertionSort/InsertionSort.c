#include<stdio.h>
int main()
{
    int n, arr[100], i, j, temp;
    printf("Enter your number : ");
    scanf("%d",&n);
    printf("Enter your element : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        j=i;
        while(j>0 && arr[j] < arr[j-1])
        {
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
    printf("In Ascending order : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
