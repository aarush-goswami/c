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
            for (int j = 0; j < c; j++)
            {
                scanf("%d ",&arr[i][j]);
            }
    }
     for (int i = 0; i < r; i++)
    {
            for (int j = 0; j < c; j++)
            {int sum=0;
            {
               sum+=arr[i][j];
            }
            printf("sum of %d row is %d/n",i+1,sum);
    }
    }
     for (int i = 0; i < c; i++)
    {
            for (int j = 0; j < r; j++)
            {
                int sum=0;
            {
               sum+=arr[i][j];
            }
            printf("sum of %d column is %d/n",j+1,sum);
    }
    }

    return 0;
}