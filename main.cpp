//   Дана матрица 7х7, поменять местами К-й столбец с К-ой строкой

#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    constexpr int size = 7;
    int M[7][7];
    int mirrow [7][7];
    int k;

    srand(time(0));

    for (int a = 0; a < size; ++a)
    {
        for (int b = 0; b < size; ++b)
        {
            M[b][a] = rand() % 10;
            printf ("%d ", M[b][a]);
        }
        printf ("\n");
    }

    printf ("Enter k (1 - 7) = ");
    scanf ("%d", &k);
    printf ("\n");

    for (int a = 0; a < size; ++a)
    {
        mirrow [k-1][a] = M [a][k-1];
        mirrow [a][k-1] = M [k-1][a];
    }

    for (int a = 0; a < size; ++a)
    {
        for (int b = 0; b < size; ++b)
        {
            M [b][k-1] = mirrow [b][k-1];
            M [k-1][a] = mirrow [k-1][a];
            printf ("%d ", M[b][a]);
        }
        printf ("\n");
    }
    return 0;
}
