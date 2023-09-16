#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=0,n;
    printf("entrez un nombre");
    scanf("%d",&n);
    do
    {
        a=a*10+n%10;
        n=n/10;
    } while (n>0);
    printf("%d",a);
    
    
    
    return 0;
}