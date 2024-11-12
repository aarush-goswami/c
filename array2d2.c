#include <stdio.h>
int main()
{
    system("cls");
    int r,c,sum=0;
    printf("Enter rows");
    scanf("%d",&r);
    printf("Enter columns");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter Elements :");
    for (int i = 0; i < r; i++)
    {
            for (int j = 0; j < c; j++)
            {
                scanf("%d ",&arr[i][j]);
                sum+=arr[i][j];
            }
    }
 printf("sum of elements %d",sum);
    return 0;
}