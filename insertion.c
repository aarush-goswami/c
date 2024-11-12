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
    for (int i = 1; i < n; i++)
    {
        int val = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > val)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        if (i != j + 1)
            arr[j + 1] = val;
    }
    printf("After sorting : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
