#include <stdio.h>

/*
    Write a program entab that replaces
    strings of blanks by the minimum
    number of tabs and blanks to achieve
    the same spacing. Use the same tab
    stops as for detab. When either a
    tab or a single blank would suffice
    to reach a tab stop, which should
    be given preference?
*/

#define TABSIZE 8

int main()
{
    int c;
    int bs;
    int ts;
    int pos;

    bs = 0;
    ts = 0;

    for (pos = 1; (c = getchar()) != EOF; ++pos) {
        if (c == ' ') {
            if (pos % TABSIZE != 0)
                ++bs;
            else {
                bs = 0;
                ++ts;
            }
        } else {
            for ( ; ts > 0; --ts)
                putchar('t');
            if (c == '\t')
                bs = 0;
            else
                for ( ; bs > 0; --bs)
                    putchar('s');
            putchar(c);
            if (c == '\n')
                pos = 0;
            else if (c == '\t')
                pos = pos + (TABSIZE - (pos - 1) % TABSIZE) - 1;
        }
    }
}