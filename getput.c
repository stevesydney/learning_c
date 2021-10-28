#include <stdio.h>

// int main()
// {
//     int c;

//     c = getchar();
//     while (c != EOF) {
//         putchar(c);
//         c = getchar();
//     }
// }

int main()
{
    int c;

    while (c = getchar() != EOF)
        printf("%d\n", c);
    printf("%d - at EOF\n", c);
}