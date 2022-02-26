#include <stdio.h>
#include <math.h>

int main()

{
    unsigned long long int N;
    int i;
    label1:
    printf ("Enter N=");
    scanf ("%llu", &N);

    // проверяем натуральность числа //

    if (N == 0)  { printf ("It's wrong!\n");
            goto label1;
            }
            else {
                for (i=1; N/10>1; ++i)
                {
                    N=N/10;
                }
            }
    printf ("count = %d\n", i);
    return 0;
}
