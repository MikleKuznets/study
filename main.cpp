// вычислить сумму элементов матрицы слева от побочной диагонали

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
    int size = 10;
    int M[size][size];
    int sum, count;

    srand(time(0));

    printf ("Enter massive = ");
    scanf ("%d", &size);
    printf ("\n");

    for (int a = 0; a < size; ++a)
    {
        for (int b = 0; b < size; ++b)
        {
            M[a][b] = rand() % 10;
            printf ("%d ", M[a][b]);
        }
        printf ("\n");
    }

    printf ("\n");
    count = size - 1;
    sum = 0;
    printf ("New massiv = \n");

    for (int a = 0; a < size; ++a)
    {
        for (int b = 0; b < count; ++b)
        {
            sum = sum + M[a][b];
            printf ("%d ", M[a][b]);
        }
        printf ("\n");
        count = count - 1;
    }

    printf("summ = %d\n", sum);

    return 0;
}
