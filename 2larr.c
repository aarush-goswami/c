#include<stdio.h>
int main()
{
    system("cls");
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    // largest element.
    int max1=arr[0],max2=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]<max2)
        {
            max2=arr[i];
        }
    }
    printf("second largest element is %d",max2);
    return 0;
}