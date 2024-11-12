#include <stdio.h>
int main()
{
    system("cls");
    int r,c;
    printf("Enter rows");
    scanf("%d",&r);
    printf("Enter columns");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter Elements :");
    for (int i = 0; i < r; i++)
    {
        {
            for (int j = 0; j < c; j++)
                scanf("%d ",&arr[i][j]);
        }
    }
    printf("Elements in 2D array are :");
    for (int i = 0; i < r; i++)
    {
        {
            for (int j = 0; j < c; j++)
                printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}