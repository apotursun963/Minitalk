

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

/*  Sinyali Yakalayan bir fonksiyon */
void handle_signal(int sign)
{
    printf("Sinyal Kesildi %d\n", sign);

}

int main(int argc, char const *argv[])
{
    signal(SIGINT, handle_signal);
    while (1)
    {
        printf("Hello World\n");
        sleep(1);
    }
    return 0;
}

/*  Sinyali Gönderen bir fonksiyon */