#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main(int argc, char *argv[])
{
    char **ptr;
    int n = 0;
    if (argc == 2)
    {
        for (ptr = environ; *ptr != NULL; ptr++){
            if (n < atoi(argv[1]))
                printf("%d - %s\n", n+1, *ptr);
            else
                return 0;
            n++;
            
        }
    }
    return 0;
}
