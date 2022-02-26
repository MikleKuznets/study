#include <stdio.h>
#include <math.h>


int main()
{
    int a, b, c;
    int min;
    bool perfect = false;

    printf ("a =");
    scanf ("%d", &a);
    printf ("b =");
    scanf ("%d", &b);
    printf ("c =");
    scanf ("%d", &c);

    // находим наименьшее число
    min = a < b ? a : b;
    min = min < c ? min : c;
//     printf ("min =%d\n", min);

    // находим делители
    for ( int i = 2; i <= min && perfect == false; ++i)
    {
//        printf ("i = %d\n", i);

          if ((a % i)==0 && (b % i)==0 && (c % i)==0)
          {
          printf ("number = %d\n", i);
          perfect = true;
          }

    }
    if (perfect == false) printf ("number == 1");
    return 0;
}
