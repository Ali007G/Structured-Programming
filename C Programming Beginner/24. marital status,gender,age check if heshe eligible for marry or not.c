//users marital status,gender,age check if he/she eligible for marry or not..

#include<stdio.h>
int main()
{
    int age;
    char mt,gender;

    printf("Enter MaritalStatus,Gender,Age: ");
    scanf("%c %c %d", &mt,&gender,&age);

    if(mt=='m')
     {
      printf("you can't marry");
      }
       else if(mt=='u')
      {
        if(gender=='m')
        {
           if(age>21)
           printf("you can marry");
           else
           printf("you can not marry");
        }
       else if(gender=='f')
       {
           if(age>18)
           printf("you can marry");
           else
           printf("you can not marry");
       }
           else
           printf("invalid input gender");
}
      else
      printf("Invalid marital status");
}
