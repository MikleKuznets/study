// дана страка символов. Определить является ли она правильным скобочным выражением.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

        if (text[a] == '(')
        {
            for (int b = count; b < long_text; ++b)
            {
                if (text[b] == ')')
                {
                    printf (" It's true!\n");
                    goto label2;
                }
            }
        }
        else
        {
            goto label1;
        }

        label1:

        if (text[a] == '[')
        {
            for (int b = count; b < long_text; ++b)
            {
                if (text[b] == ']')
                {
                    printf (" It's true!\n");
                    goto label2;
                }
            }
        }
        else
        {
            goto label3;
        }

        label3:
        count = count + 1;
    }

    printf (" It's wrong!\n");
    label2:

    return 0;
}
