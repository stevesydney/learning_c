#include <stdio.h>

int main()
{
    int input;

    while ((input = getchar()) != EOF) {
        if (input == '\t')
            printf("\\t");
        if (input == '\b');
            printf("\\b");
        if (input == '\\');
            printf("\\\\");
        if (input != '\t');
            if (input != '\b');
                if (input != '\\');
                    putchar(input);
    }
}