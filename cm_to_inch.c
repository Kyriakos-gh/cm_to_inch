/*
    cm_to_inch.c : Calculates inches to centimeters or centimeters to inches
    Based on C++ code of the program from book Principles and Practice Using C++, 2nd ed. by Bjarne Stroustrup
    Kyriakos, 20/10/2022
*/

#include <stdio.h>

#define CM_PER_INCH  2.54

int main(void)
{
    double length = 1, in, cm;
    char unit = ' ';

    printf("Please give a length followed by a unit ((c)m or (i)nch): ");
    scanf("%lf%c", &length, &unit);

    cm = CM_PER_INCH * length;
    in = length / CM_PER_INCH;

    if(unit == 'i') {
        printf("%.2lfin = %.2lfcm\n", length, cm);
    }
    else if(unit == 'c') {
        printf("%.2lfcm = %.2lfin\n", length, in);
    }
    else {
        printf("Wrong input: %c\n", unit);
    }

    return 0;
}
