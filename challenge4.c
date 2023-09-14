#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,d,som;
    float moy;
    printf("Enter the numbres : like(a b c d)");
    scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
    som=a+b+c+d;
    moy=(float)som/4;
    printf("the total is :%d \n",som);
    printfs("your average is :%f",moy);
    return 0;
}