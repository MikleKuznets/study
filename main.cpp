// определить местоположение элементов массива А(30), не встречающихся в массиве В(15).

#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    constexpr int size1 = 30;
    constexpr int size2 = 15;
    int A[size1];
    int B[size2];
    int poisk = 0;  // вспомогательный

    srand(time(0));

    printf ("Massive A =");
    for (int a = 0; a < size1; ++a)
    {
        A[a] = rand() % 10;
        printf ("%d ", A[a]);
    }
    printf ("\n");

    printf ("Massive B =");
    for (int b = 0; b < size2; ++b)
    {
        B[b] = rand() % 10;
        printf ("%d ", B[b]);
    }
    printf ("\n");


    for (int c = 0; c < size1; ++c)
    {
        for (int d = 0; d < size2; ++d)
        {
            if (A[c] != B[d])
            {
                poisk = poisk +1;
                if (poisk == 15)
                {
                    printf ("A[%d] = %d\n", c, A[c]);
                }
            }
        }
        poisk = 0;


    }

    return 0;
}
