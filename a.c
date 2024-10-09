#include <stdio.h>
int main(){
    int x=2, y;
    y = ++x + ++x + ++x;
    printf("Y= %d",y);
    return 0;
}