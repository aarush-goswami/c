// count no. of digits using built-in function
#include<stdio.h>
#include<math.h>
int main()
{
    system("cls");
    int x,digits;
    printf("Enter No.");
    scanf("%d", &x);
    digits = (int)log10(x);
    printf("%d %d",x, digits+1);
    return 0;
}