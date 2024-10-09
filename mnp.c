#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(){
    system("cls");
    float a,b,c,d,e,total,perc;
    printf("Enter the Marks in five subjects");
    scanf("%f%f%f%f%f",&a, &b, &c, &d, &e);
    printf("total marks obtained %f percentage is %f", (a+b+c+d+e),( a+b+c+d+e)/5);
    return 0;
}  