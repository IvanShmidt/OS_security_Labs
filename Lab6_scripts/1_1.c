#include <stdio.h>
extern char **environ;

int main(int argc, char *argv[])
{
    char **p;
    int n = 0;
    for (p = environ; *p != NULL; p++)
        n = n+1;
    printf("Number of environment variables: %d\n", n);
    return 0;
}

//echo "" Number of enviroment variables:
//env | wc -l
