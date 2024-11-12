#include <stdio.h>
#include <stdlib.h>
void main(){
    system("cls");
    int a,b,c,largest;
    printf(" Enter Three Numbers");
    scanf("%d %d %d", &a, &b, &c);
    largest = (a>b)? a:b;
    largest = (largest>c)? largest : c;
    printf("largest value is %d",largest );
    }  