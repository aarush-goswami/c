#include <stdio.h>
int main()
{
    system("cls");
    int n, sum = 0;
    printf("enter 5 digit no.");
    scanf("%d", &n);
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    printf("sum=%d", sum);
    return 0;
}