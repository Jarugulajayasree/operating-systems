#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
int main(void){
    
    pid_t child;
    
    if((child=fork())<0){
        printf("Problem with fork()\n");
        exit(1);
    } else if (child == 0){
        printf("In child process, parent ID %d\n", getppid());
        printf("In child process, process ID %d\n", getpid());
    } else {
        printf("In parent process, process ID %d\n", getpid());
    }
    
    return 0;
}
