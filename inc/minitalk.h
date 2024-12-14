
#ifndef MINITALK_H
#define MINITALK_H

#include <stdio.h>      // gereksiz kütüphaneleri sil
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>


int     ft_strlen(char *str);
int	    ft_atoi(char *str, int base);
char    *get_binary(int chr);


#endif