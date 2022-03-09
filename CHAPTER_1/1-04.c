#include <stdio.h>

/* print Celsius-Fahrenheit table
   for celsius = -100, -90, ..., 100; floating point version */
main()
{
        float fahr, celsius;
        int lower, upper, step;

        lower = -100; /* lower limit of temperature table */
        upper =  100; /* upper limit */
        step  =   10; /* step size */

        printf("Celsius–Fahrenheit table\n");
        printf("%4s %6s\n", "C", "F");

        celsius = lower;
        while (celsius <= upper) {
                fahr = celsius * (9.0/5.0) + 32.0;
                printf("%4.0f %6.1f\n", celsius, fahr);
                celsius = celsius + step;
        }
}
