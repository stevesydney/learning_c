#include <stdio.h>

#define MAXLENGTH   1000
#define LONGLINE    80

int getaline(char line[], int maxline);

int main()
{
    int currentlength;
    char line[MAXLENGTH];

    while ((currentlength = getaline(line, MAXLENGTH)) > 0)
        if (currentlength > LONGLINE)
            printf("%s", line);
    
    return 0;
}

/* getline: read a line into line[], return length */
int getaline(char line[], int maxline)
{
    int c, i;

    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}