#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
    int     i;

    i = 0;
    while(s[i])
        i++;
    while (i > 0)
    {
        if (s[i] == (char)c)
            return (char *)&s[i];
        i--;
    }
    if (s[i] == '\0')
        return (char *)&s[i];
    return NULL;
}
int main()
{
    printf("%s", strrchr("zakariai", 'l'));
}