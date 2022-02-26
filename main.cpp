// дана строка символов. Удалить из нее все нечетные слова, слова отделяются друг от друга пробелом.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()

{
    constexpr int size = 255;
    char text[size];
    int count = 0;
    int long_text = 0;

    printf ("Enter text: ");
    gets (text);
    printf ("\n");

    while (text[long_text] != '\0')
    {
        long_text = long_text + 1;
    }

    for (int a = 0; a < long_text; ++a)
    {
        if (text[a] == ' ')
        {
//            printf ("count = %d\n", count);

            if (count%2)
            {
                text[a-count] = '\0';
                for (int b = 0; b <= count; ++b)
                {
                   text[a - b] = ' ';
                }
            }
            else
            {
                goto label1;
            }
            label1:
            count = -1;

        }
        count = count + 1;
    }

    printf ("count = %d\n", count);

    if (count%2)
    {
        text[long_text-count] = '\0';
    }

    printf ("\n");
    printf ("new text: %s", text);

    return 0;
}
