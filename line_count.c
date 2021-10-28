#include <stdio.h>

// int main()
// {
//     int c, nl;

//     nl = 0;
//     while ((c = getchar()) != EOF)
//         if (c == '\n') {
//             ++nl;
//             printf("%d\n", nl);
//         }
//     printf("%d\n", nl);
// }

// int main()
// {
//     int c, nl;

//     nl = 0;
//     while ((c = getchar()) != EOF)
//         if (c == ' ') {
//             ++nl;
//             printf("%d\n", nl);
//         }
//     printf("%d\n", nl);
// }

#define NONBLANK 'a'

int main()
{
    int c, lastc;

    lastc = NONBLANK;

    while ((c = getchar()) != EOF) {
        if (c != ' ')
            putchar(c);
        if (c == ' ')
            if (lastc != ' ')
                putchar(c);
        lastc = c;

    }
}