#include <stdio.h>

/* count lines in input */
main()
{
        int c, nl, tabs, blanks;

        nl = tabs = blanks = 0;
        while ((c = getchar()) != EOF) {
                if (c == '\n')
                        ++nl;
                else if (c == '\t')
                        ++tabs;
                else if (c == ' ')
                        ++blanks;
        }
        printf("%8s: %d\n", "Newlines", nl);
        printf("%8s: %d\n", "Tabs",     tabs);
        printf("%8s: %d\n", "Blanks",   blanks);
}
