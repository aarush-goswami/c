#include <stdio.h>
#include <stdlib.h>
int main(){
    float r,a,b;
    const float pi = 3.141;
    printf("Enter the radius of circle");
    scanf("%f",&r);
    printf("area of circle is %f\n perimeter of circle is %f\n", pi * r *r,2 * pi *r);

    printf("Enter the side of square");
    scanf("%f",&a);
    printf("Area of square is %f\n perimeter of square is %f\n", a*a , 4*a);

    printf("Enter the length and breadth of rectangle");
    scanf("%f%f",&a, &b);
    printf("Area of rectangle is %f\n perimeter of rectangle is %f\n", a*b, 2*(a+b));
    return 0;
    } 