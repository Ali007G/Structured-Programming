#include<stdio.h>
#include<math.h>
int main()
{
    float x2,x1,y2,y1,D;
    scanf("%f %f %f %f", &x2,&x1,&y2,&y1);

    D=(sqrt(pow((x2-x1),2))+(pow((y2-y1),2)));
    printf("distance is %.2f", D);

    return 0;

}
