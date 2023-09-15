#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Enter un numbre :");
    scanf("%d",&num);
    for (int i = num/2; i > 1; i--){
        if (num%i==0)
        {
           printf("nombre est premier");
           return 0;
        }
        }
    
    return 0;
}