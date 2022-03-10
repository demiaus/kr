#include <stdio.h>
#define MAX_LEN 16

main()
{
        /* Horizontal histogram */

        int c, i, j, n, hi, len;
        int lens[MAX_LEN] = { 0 };
        char bar = '#';
        len = hi = 0;

        putchar('\n');
        while((c = getchar()) != EOF) {
                if(c == ' ' || c == '\n' || c == '\t') {
                        if (len > 0 && len < MAX_LEN-1)
                                lens[len-1]++;
                        else
                                lens[MAX_LEN-1]++;
                        len = 0;
                }
                else
                        len++;
        }

        for (i = 0; i < MAX_LEN-1; ++i) {
                printf("%3d ", i+1);
                n = lens[i];
                if (n > hi)
                        hi = n;
                while (n--)
                        putchar(bar);
                putchar('\n');
        }

        printf("%2d+ ", MAX_LEN);
        n = lens[MAX_LEN-1];
        while (n--)
                putchar(bar);
        printf("\n\n");

        /* Vertical histogram */

        for (i = hi; i > 0; --i) {
                printf("%2d ", i);
                for (j = 0; j < MAX_LEN; ++j) {
                        if (lens[j] >= i)
                                printf("%c  ", bar);
                        else
                                printf("   ");
                }
                putchar('\n');
        }

        printf("   ");
        for (i = 0; i < MAX_LEN-1; ++i) {
                printf("%-3d", i+1);
        }
        printf("%-2d+\n", MAX_LEN);

}
