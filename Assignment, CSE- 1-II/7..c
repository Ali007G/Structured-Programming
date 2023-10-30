#include <stdio.h>
struct student {
    char name[50];
    int id;
    float marks;
} s;

    int main()
{
    printf("Enter the student information-\n");
    printf("Name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Id number: ");
    scanf("%d", &s.id);
    printf("Marks: ");
    scanf("%f", &s.marks);

    printf("\nGiven information are below here:");
    printf("\nName: ");
    printf("%s", s.name);
    printf("Id number: %d\n", s.id);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
