#include <stdio.h>
int main(void)

{
    int a = 5;
    int b;
    int c = 5;
    printf("a=%d\n", a);
    printf("c=%d\n", c);
    printf("b=");
    scanf("%d", &b);
    a = a + b - 2;
    printf("a=%d\n", a);
    c = c + 1;
    printf("c=%d\n", c);
    int d;
    printf("d=");
    scanf("%d", &d);
    d = c - a + d;
    printf("d=%d\n", d);
    a = a * c;
    printf("a=%d\n", a);
    c = c - 1;
    printf("c=%d\n", c);
    a = a/10;
    printf("a=%d\n", a);
    c = c/2;
    printf("c=%d\n", c);
    b = b - 1;
    printf("b=%d\n", b);
    d = d * (c + b + a);
    printf("d=%d\n", d);

    return 0;
}
