#include <stdio.h>
extern char **environ;

int main(int argc, char *argv[])
{
    char **ptr;
    int n = 0;
    for (ptr = environ; *ptr != NULL; ptr++)
        n = n+1;
    printf("Number of environment variables: %d\n", n);
    return 0;
}

//echo " Number of enviroment variables:"
//env | wc -l
