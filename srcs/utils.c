
#include "../inc/minitalk.h"

// sadece client ve server adında iki dosya olmalı bu dosyasyı sil onun yerine kullan ve ft_printf

int  ft_strlen(char *str)
{
    int counter;

    counter = 0;
    while (*str++)
        counter++;
    return (counter);
}

int	ft_atoi(char *str, int base)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
    if (base == 10)
    {
        while (*str >= '0' && *str <= '9')
		    result = (result * 10) + (*str++ - '0');
    }
    else if (base == 2)
    {
        while (*str == '0' || *str == '1')
		    result = (result * 2) + (*str++ - '0');
    }
	return (result * sign);
}

char    *get_binary(int chr)
{
    char *binary;
    int idx;

    idx = 7;
    binary = malloc(9);
    while (idx >= 0)
    {
        binary[idx] = (chr % 2) + '0';
        chr /= 2;
        idx--;
    }
    binary[8] = '\0';
    return (binary);
}