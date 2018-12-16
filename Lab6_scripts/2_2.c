#include <stdio.h>
#include <unistd.h>


int main()
{
    int pid = fork();
    if (pid == 0){
        sleep(2);
        printf("process from fork\n");
    }
    else{
        sleep(4);
        printf("process from parent\n");
    }
    return 0;
}
