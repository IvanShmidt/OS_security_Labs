#include <stdio.h>
extern char **environ;

int main(int argc, char *argv[])
{
    char **ptr;
    int n = 1;
    for (ptr = environ; *ptr != NULL; ptr++){        
	printf("%d - %s\n", n, *ptr);
        if (n == 10){
            return 0;
	}
	n++;
    }
    return 0;
}
