#include <stdio.h>
int main()
{
    system("cls");
    int n, flag = 0, i;
    printf("Enter array size");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d element(s)", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter Searching element");
    scanf("%d", &target);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        { 
            flag=1;
            break; 
        }
    }
    if (flag == 1)
        printf("Search Found at %d", i);
    else
        printf("Search Not Found !!");
    return 0;
}