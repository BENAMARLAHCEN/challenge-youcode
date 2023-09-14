#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,som;
    float moy;
    printf("Enter the first numbre :");
    scanf("%d",&a);
    printf("Enter the next numbre :");
    scanf("%d",&b);
    printf("Enter the last numbre :");
    scanf("%d",&c);
    som=a+b+c;
    moy=(float)som/3;
    printf("your average is :%f",moy);
    return 0;
}