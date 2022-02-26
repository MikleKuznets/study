#include <stdio.h>
#include <math.h>
#include <string.h>

int main()

{
unsigned long long N;
int count = 0;
char number [50];

printf ("Enter N = ");
scanf ("%llu", &N);
//  printf ("%llu", N);

do
{
    if (N % 2)
    {
        number [count] = '1';
        printf ("%c", number[count]);
    }
    else
    {
        number [count] = '0';
        printf ("%c", number[count]);
    }

    count = count + 1;
    N = N / 2;
}
while (N);
number [count] = '\0';
for (int i = count-- ; i > 0 ; i--)
{
        printf ("%c", number[i-1]);
}

    return 0;
}
