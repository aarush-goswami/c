#include<stdio.h>
int main()
{
    int x;
    printf("Enter Number for multiplication Table");
    scanf("%d",&x);
    for(int i=1;i<=20;i++)
    {
        printf("%d * %d = %d\n",x,i,(i*x));
    }
    return 0;
}