#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int a;
    printf("Enter Number");
    scanf("%d", &a);
    (a % 2 == 0) ? printf(" It is Even") : printf(" It is Odd");
    return 0;
}
