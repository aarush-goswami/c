#include<stdio.h>
int main(){
    int num, cube;
    printf("Enter The Number");
    scanf("%d", &num);
    if(num>0)
    {
        cube = num*num*num;
        printf("Cube of given number is %d", cube);

    }
}