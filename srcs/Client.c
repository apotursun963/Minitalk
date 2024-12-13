#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int     ft_atoi(char *str)
{
    int res = 0;

    while (*str >= '0' && *str <= '9')
    {
        res = (res * 10) + (*str - '0');
        str++;
    }
    return (res);
}

/*  Sinyali Gönderen bir fonksiyon */
int main(int argc, char **argv)
{
    (void)argc;

    pid_t pid;

    pid = ft_atoi(argv[1]);

    printf("Server'a SIGINT sinyali gönderildi....\n");
    kill(pid, SIGINT);
}
