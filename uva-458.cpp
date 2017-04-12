#include <cstdio>

int main()
{
    char c;

    while ((c = getchar()) != EOF)
        putchar((c == '\n') ? c : c-7);
    return 0;
}