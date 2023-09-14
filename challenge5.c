#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x1,x2,y1,y2;
    printf("Enter the first coordinate :");
    scanf("%d %d",&x1,&y1);
    printf("Enter the next coordinate :");
    scanf("%d %d",&x2,&y2);
    
    printf("the distance is :%f",(float)sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));

    
    return 0;
}