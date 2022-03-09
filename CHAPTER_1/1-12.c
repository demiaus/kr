#include <stdio.h>

/* print input 1 word per line */

main()
{
    int c;

    while ((c = getchar()) != EOF) {
            if (c == ' ' || c == '\t') {
                while (c == ' ' || c == '\t')
                        c = getchar();
                putchar('\n');
            }
            putchar(c);
    }
}
