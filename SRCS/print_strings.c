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
		nanosleep(time, NULL);
	}
}

static void	unprint_str(unsigned int len, struct timespec time)
{
	while (len > 0)
	{
		ft_putstr("\b \b");
		nanosleep(time, NULL);
		len--;
	}
}

void	print_strings(char *colour, char *str)
{
	unsigned int	l;
	struct timespec	time;

	l = ft_strlen(str);
	time.tv_sec = 0;
	time.tv_nsec = 10000000;
	if (colour != NULL)
		ft_putstr(colour);
	print_str(str, time, len);
	time.tv_nsec = 5000000;
	unprint_str(l, time);
	if (colour != NULL)
		ft_putstr("\e[0m");
}
