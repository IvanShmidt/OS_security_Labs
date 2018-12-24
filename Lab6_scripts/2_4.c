#include <stdio.h>
#include <unistd.h>



int main(){
    int pid = fork();
    char c = "y";
    while(1)
    {
	printf("paren pid: %d, ", pid);
	pid = fork();
	printf("pid: %d\n", pid);
	sleep(2);
    }

    return 0;
}

// если не ограничить принудительно, будет до бесконечности
// порождать процессы. У меня повесил компъютер..
