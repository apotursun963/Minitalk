
#include "../inc/minitalk.h"

/* Sinyal Gönderen Bir Fonksiyon */

void    send_signal(pid_t process_id, char *message)
{
    int i;
    int len;
    unsigned  char *binary_str;

    len = ft_strlen(message);
    message[len] = '\n';
    message[len + 1] = '\0';
    while (*message)
    {
        i = 0;
        binary_str = get_binary((unsigned char)*message);
        while (i < 8)
        {
            if (binary_str[i] == '1')
                kill(process_id, SIGUSR1);
            else
                kill(process_id, SIGUSR2);
            usleep(100);
            i++;
        }
        free(binary_str);
        message++;
    }
}

int main(int argc, char **argv)
{
    pid_t   process_id; 
    char    *message;

    if (argc != 3)
    {
        printf("The number of arguments must be 3\n");
        exit(0);
    }
    message = argv[2];
    process_id = ft_atoi(argv[1], 10);
    send_signal(process_id, message);
    return (0);
}

