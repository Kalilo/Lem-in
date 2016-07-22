#include "lem-in.h"
#include <time.h>

static void	print_str(char *str, struct timespec time, unsigned int len)
{
	unsigned int	k;

	k = 0;
	while (k < len)
	{
		ft_putchar(str[k]);
		k++;
		nanosleep(&time, NULL);
	}
}

static void	unprint_str(unsigned int len, struct timespec time)
{
	while (len > 0)
	{
		ft_putstr("\b \b");
		nanosleep(&time, NULL);
		len--;
	}
}

void	print_strings(char *colour, char *str, int unprint)
{
	unsigned int	l;
	struct timespec	time;

	if (str == NULL)
		return ;
	l = ft_strlen(str);
	time.tv_sec = 0;
	time.tv_nsec = 50000000;
	if (colour != NULL)
		ft_putstr(colour);
	print_str(str, time, l);
	if (unprint)
	{
		time.tv_sec = 1;
		time.tv_nsec = 0;
		nanosleep(&time, NULL);
		time.tv_sec = 0;
		time.tv_nsec = 25000000;
			unprint_str(l, time);
	}
	if (colour != NULL)
		ft_putstr("\e[0m");
}
