#include<stdio.h>
#include<math.h>   // INCOMPLETE
int main()
{
    float r1,r2,b,a,c;
    printf("Enter the value of a,b,c: ");
    scanf("%f%f%f", &a,&b,&c);

    r1=-b+sqrt((b*b)-4*a*c);
    r2=-b-sqrt((b*b)-4*a*c);

    if(r1>0 || r2>0)
    {
        printf("Roots are unequal");
    }
    else if(r1<0 || r2<0)
 {
        printf("Roots are imiginary");
   }
   else
   {
           printf("Roots are equal");
   }
      printf("r1=%f", r1);
      printf("r2=%f", r2);
}
