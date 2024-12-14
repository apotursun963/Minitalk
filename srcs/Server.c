
#include "../inc/minitalk.h"

/*  Sinyali Yakalayan bir fonksiyon */
void    signal_handler(int signal)
{
    static unsigned char byte[9];
    static int bits = 0;
    char    chr;

    if (signal == SIGUSR1)
        byte[bits] = '1';
    else if (signal == SIGUSR2)
        byte[bits] = '0';
    bits++;
    if (bits == 8)
    {
        byte[8] = '\0';
        chr = ft_atoi(byte, 2);
        printf("%c", chr);
        bits = 0;
    }
}

int main()
{
    pid_t pid;

    pid = getpid();
    printf("Server Process ID: %d\n", pid);      // kendi ft_printf kullan intradan çek

    while (1)
    {
        signal(SIGUSR1, signal_handler);
        signal(SIGUSR2, signal_handler);
        pause();
    }
    return (0);
}
