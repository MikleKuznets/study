#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

    int X;
    int dop;  // дополнительные переменные для расчётов
    int count=0;
    int number [50];
    int first, last;

    printf ("Enter X = ");
    scanf ("%d", &X);

    do
    {
        dop = X / 10;
        number[count] = X - (dop * 10);
        count = count + 1;
        X = X / 10;
    }
    while (X>1);

    first = number [0];
    last = number [count - 1];

    printf("%d", first);

    for (int i = count-2 ; i > 0 ; i--)
    {
          dop = number [i];
          printf ("%d", dop );
    }

    printf ("%d", last);
    return 0;
}
