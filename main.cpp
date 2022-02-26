#include <stdio.h>
#include <math.h>

int main()

{
    float r, a, d;
    float s_circle, s_triangle, s_square;
    float most;

    printf ("r=");
    scanf ("%f", &r);
    printf ("a=");
    scanf ("%f", &a);
    printf ("d=");
    scanf ("%f", &d);

    s_circle = pow (r,2) * M_PI;
    s_triangle = ( (pow (a, 2)) * sqrt(3) )/ 4;
    s_square = pow (d, 2);

    printf ("S circle = %f\n", s_circle);
    printf ("S triangle = %f\n", s_triangle);
    printf ("S square = %f\n", s_square);

    most = s_circle < s_triangle ? s_triangle : s_circle;
    most = most < s_square ? s_square : most;

    printf ("S most = %f\n", most);

    return 0;
}
