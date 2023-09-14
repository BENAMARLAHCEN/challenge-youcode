#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b;
    char oper;
    printf("Enter the first variable :");
    scanf("%d",&a);
    printf("Enter the next variable :");
    scanf("%d",&b);
    printf("Enter your operation :");
    scanf(" %c",&oper);
    switch(oper) {
        case '+' : printf("a + b=%d",a+b);
        break;
        case '-' : printf("a - b=%d",a-b);
        break;
        case '*' : printf("a * b=%d",a*b);
        break;
        case '/' : printf("a / b=%f",(float)a/b);
        break;
        case '%' : printf("a %% b=%d",a % b);
        break;
        default  : printf("this operation isn't exist");
        break; 
    }
    return 0;
}