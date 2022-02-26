#include <stdio.h>
#include <math.h>

int main()

{
    float x;
    float y;
    float a; // переменная введена, чтобы разбить уравнение - верх //
    float b, c; // переменная введена, чтобы разбить уравнение - низ //
    float d; // переменная введена, чтобы разбить уравнение - е в кубе//

    printf ("x=");
    scanf ("%f", &x);

    // верхняя часть уравнения //

    a = M_PI / 6;
    a = x - a;
    a = cos (a);
    a = 2 * a + sqrt(2);

    //  printf ("up= %f\n",a);

    // нижняя часть уравнения //

    b = pow (x, 2);
    b = sin (b);
    b = pow (b, 2);

    //  printf ("down1= %f\n", b);

    c = log(x);

    //  printf ("down_log= %f\n", c);

    c = 2 * c;
    c = 1 / c;

    //  printf ("down2= %f\n", c);

    b = b + c;

    //  printf ("down= %f\n", b);

    // е в кубе //

    d = 3 * x;
    d = exp (d);

    //  printf ("exp= %f\n", d);

    // финал //

    y = a / b * d;

    printf ("y= %f\n", y);


    return 0;
}
