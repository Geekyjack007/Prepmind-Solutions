#include<stdio.h>
#include<math.h>
int main()
{
    float distance;
    int x1,x2,y1,y2;
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    distance=sqrt((x2-x1)(x2-x1)+(y2-y1)(y2-y1));
    printf("Distance Between Two points : %.2f",distance);
}
