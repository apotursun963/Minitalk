
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>


/*  Sinyali Yakalayan bir fonksiyon */
void    signal_handler(int signal)
{
    printf("SIGINT (%d) sinyali yakalandı.\n", signal);
    exit(0);
}

int main()
{
    pid_t pid = getpid();

    printf("Server Process ID'si: %d\n", pid);

    signal(SIGINT, signal_handler);
    
    while (1)
        pause();
}

