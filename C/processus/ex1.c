#include <sys/types.h>
// #include <sys/wait.h> //ne fonctionne pas sur Windows 11
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    pid_t child = fork();
    if (child == -1)
    {
        perror("fork() error");
        exit(1);
    }
    // printf("My PID is %d.\n", getpid());
    if (child == 0)
    {
        printf("Child process : my PID is %d.\n", getpid());
        exit(0);
    }
    printf("Now my PID is %d.\n", getpid());
    exit(0);
}