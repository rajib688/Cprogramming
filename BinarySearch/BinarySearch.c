#include <stdio.h>
int main()
{
    int n;
    printf("Enter limit of array : ");
    scanf("%d", &n);
    int a[n], i,e;
    printf("Enter your element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("your sorted arrays is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    int value;
    printf("Enter a value that you want to search: ");
    scanf("%d", &value);
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (value == a[mid])
        {
           return printf("your element has been match of element no. %d",mid+1);
        }
        else if (value < a[mid])
        {
            high = mid - 1;
        }
        else{
            low =mid+1;
        }
        low++;
    }
    return 0;
}
