#include<stdio.h>
#include<math.h>
int main()
{
    system("cls");
    int num,count;
    printf("Enter Number");
    scanf("%d",&num);
    int lastdigit=num%10;
    num/=10;
    count= (int)log10(num);
    int firstdigit = num/pow(10,count);
    int rm = num%(int)pow(10,count);
    num = lastdigit*pow(10,count+1)+ rm*10 + firstdigit;
    printf("%d",num);
    return 0;
}