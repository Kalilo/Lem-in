#include <time.h>
#include <strings.h>
#include <unistd.h>
#include <stdio.h>

void		putstr(char *str)
{
	int				k;

	k = 0;
	while (str[k] != '\0')
		k++;
	write(1, str, k);
}

static void	print_str(char *str, struct timespec time, unsigned int len)
{
	unsigned int	k;

	k = 0;
	while (k < len)
	{
		write(1, &str[k], 1);
		k++;
		nanosleep(&time, NULL);
	}
}

static void	unprint_str(unsigned int len, struct timespec time)
{
	while (len > 0)
	{
		write(1, "\b \b", 3);
		nanosleep(&time, NULL);
		len--;
	}
}

void	ft_print_strings(char *colour, char *str)
{
	unsigned int	l;
	struct timespec	time;

	l = strlen(str);
	time.tv_sec = 0;
	time.tv_nsec = 50000000;
	if (colour != NULL)
		putstr(colour);
	print_str(str, time, l);
	time.tv_sec = 1;
	time.tv_nsec = 0;
	nanosleep(&time, NULL);
	time.tv_sec = 0;
	time.tv_nsec = 25000000;
	unprint_str(l, time);
	if (colour != NULL)
		putstr("\e[0m");
}

int		main(int argv, char **argc)
{
	unsigned int	k;

	k = 1;
	if (argv < 2)
		printf("Nothing entered...\n");
	else
	{
		while (k < argv)
		{
			ft_print_strings("\e[32m", argc[k]);
			k++;
		}
	}
		
}
