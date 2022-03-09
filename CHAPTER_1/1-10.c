#include <stdio.h>

/*
 * Copy input to output
 * but replace tabs, backspace and backslash
 * with "\t", "\b" and "\\" respectively
 */

main()
{
        int c;

        while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            printf("%c", c);
        }
}
