#include<stdio.h>
int main()
{
    system("cls");
    int x,sum,n=0;
    printf("Enter Number");
    scanf("%d",&x);
    int y=x;
    while(x!=0)
    {
        x/=10;
        n++;
    }
    x=y;
    int lastdigit = x%10;
    int firstdigit = x/pow(10,n-1);

    printf("%d",firstdigit+ lastdigit);
}