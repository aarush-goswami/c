#include <stdio.h>
int main()
{
    system("cls");
    int arr[4][3];
    printf("Enter Elements :");
    for (int i = 0; i < 4; i++)
    {
        {
            for (int j = 0; j < 3; j++)
                scanf("%d ",&arr[i][j]);
        }
    }
    printf("Elements in array are :");
    for (int i = 0; i < 4; i++)
    {
        {
            for (int j = 0; j < 3; j++)
                printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}