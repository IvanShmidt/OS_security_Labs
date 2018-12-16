#include <stdio.h>
#include <unistd.h>



int main(){
    int pid = 1;
    int i = 0;
    for (i = 0; i < 10; i++){
        if (pid != 0){
            pid = fork();
        }
        else
            sleep(2);
    }
    if (pid > 0)
        sleep(4);
    return 0;

}
