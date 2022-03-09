#include <stdio.h>

main()
{
        int c, prev = -1;

        while ((c = getchar()) != EOF) {
                if (!(c == ' ' && prev == ' '))
                        putchar(c);
                prev = c;
        }
}
