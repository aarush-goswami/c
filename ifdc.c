#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    float b;
    double c;
    char ch;
    printf("Enter Integer value");
    scanf("%d", &a);
    printf("Enter float value");
    scanf("%f", &b);
    printf("Enter double value");
    scanf("%lf", &c);
    printf("Enter character value");
    scanf("%Lf", &ch);
    printf("a = %d", a);
    printf("b = %f", b);
    printf("c = %lf", c);
    printf("ch = %f", ch);
    return 0;
}