#include<stdio.h>
#include<stdlib.h>
int main(){
    float f;
    printf("Enter temperature in farenheit");
    scanf("%f", &f);
    printf("Temperature in celcius is %.1f",(f - 32)*0.5555);
    return 0;
}