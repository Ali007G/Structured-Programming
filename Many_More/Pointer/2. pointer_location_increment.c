#include <stdio.h>
int main() {
    int *a, b = 10;
    char *c, d = 'z';
    double *p, q = 1.5;
    a = &b;
    c = &d;
    p = &q;

    printf("Address of int variable: %d\n", a);
    a = a + 1;
    printf("Address of int variable: %d\n", a);
    puts("");

    printf("Address of char variable: %d\n", c);
    c = c + 1;
    printf("Address of char variable: %d\n", c);
    puts("");

    printf("Address of double variable: %d\n", p);
    p++;
    printf("Address of double variable: %d\n", p);
}

