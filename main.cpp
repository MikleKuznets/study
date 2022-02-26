// поменять местами максимальный и последний отрицательный (минимальный) элемент массива М(40)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


using namespace std;

int main()

{
    constexpr int size = 40;
    int M[size];
    int max, min; // числа из массива
    int count1, count2; // место в массиве
//    int *max_count = &max;
//    int *min_count = &min; //  адреса в массиве

    srand(time(0));

    for (int i = 0; i < size; ++i)
    {
        M[i] = rand() % 10;
    }

    for (int i = 0; i < size; ++i)   // вывод массива
    {
        printf ("M[i] = %d  ", M[i]);
    }

    max = M[0];
    min = M[0];

    for (int n = 0; n < size - 1; ++n)
    {
        if (max > M[n+1])
        {
          max = max;
        }
        else
        {
            max = M[n+1];
            count1 = n + 1;
        }
//        printf ("max = %d  ", max);
        if (min < M[n+1])
        {
            min = min;
        }
        else
        {
            min = M[n+1];
            count2 = n + 1;
        }
//        printf ("min = %d  \n", min);
    }

    printf ("\n");
//    printf ("proverka \n");
//    printf ("max = %d , min = %d , count1 = %d , count2 = %d \n", max, min, count1, count2);

    M[count1] = min;
    M[count2] = max;

    printf ("\n");
    printf ("New massiv \n");
    printf ("max = %d , min = %d \n", max, min);

    for (int k = 0; k < size; ++k)
    {
        printf ("M[k] = %d  ", M[k]);
//        printf ("k = %d ", k);
    }

    return 0;
}
