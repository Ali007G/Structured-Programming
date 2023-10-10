#include<stdio.h>
int main()
{
    int s1,s2,s3,total;
    float avg;
    printf("Enter three subjects marks: ");
    scanf("%d%d%d", &s1,&s2,&s3);

    total=s1+s2+s3;
    avg=total/3.0;
    printf("\nTotal marks is :%d\n", total);
    printf("Average marks is :%.2f", avg);

    if(avg>=60)
        printf("Grade A");
    else if(avg>50 && 60<avg)
        printf("Grade B");
    else if(avg>40 && 50<avg)
        printf("Grade B");
    else
        printf("\nGrade fail");

}

