#include<stdio.h>
int main()
{
    int x[5];
    printf("Enter 5 numbers\n");
    for(int i=0; i<= 4; i++)
    {
        printf("Enter Number for index %d:", i);
        scanf("%d",&x[i]);
    }
    printf("Elements in array are:\n");
    for(int i;i<5;i++)
    printf("Elements in array are\n");
    for(int i=0;i<5;i++)
    {
        printf("numbers[%d]=%d\n",i,x[i]);
    }
    return 0;
}