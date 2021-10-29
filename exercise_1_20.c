#include <stdio.h>

/*  write a program detab
    that replaces tabs in
    the input with the 
    proper number of 
    blanks to space to 
    the next tab stop.
    Assume a fixed set of
    tab stops, say every
    n columns. Should n
    be a variable or a
    symbolic parameter? */

#define TABSIZE 8

int main()
{
    int c, pos, nb;
    pos = 0;
    nb = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            nb = TABSIZE - pos % TABSIZE;
            while (nb > 0) {
                putchar('t');
                --nb;
                ++pos;
            }
        } else if (c == ' ') {
            putchar('s');
            ++pos;
        } else if (c == '\n') {
            putchar(c);
            pos = 1;
        } else {
            putchar(c);
            ++pos;
        }
    }
}