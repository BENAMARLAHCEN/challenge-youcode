#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c=0,h=0,n;
    int oct[20], hexd[20];
   
    printf("Entrez un nombre :");
    scanf("%d",&n);
    int temp=n;
    do{
       oct[c]=n%8;
       n=n/8;
       c++;
    } while (n>0);
    for (int i=c-1; i >= 0; i--)
    {
        printf("%d",oct[i]);
    }
    printf("\n");
    do{
       hexd[h]=temp%16;
       temp=temp/16;
       h++;
    } while (temp>0);
    for (int i=h-1; i >= 0; i--)
    {
        switch (hexd[i])
        {
        case 10: printf("A");
            break;
        case 11: printf("B");
            break;
        case 12: printf("C");
            break;   
        case 13: printf("D");
            break; 
        case 14: printf("E");
            break;
        case 15: printf("F");
            break;
        default: printf("%d",hexd[i]);
            break;
        }
    }
    
    
    
    
    
    return 0;
}