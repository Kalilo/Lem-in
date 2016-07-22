//#include "../includes/lem-in.h"
#include <unistd.h>
#include <time.h>

void	clear(int n)
{
	int		i;

	i = 0;
	while (i++ < n)
		write(1, "\b \b", 3);
}

void	welcome(void)
{
	struct timespec tim, tim2;
	tim.tv_sec = 0;
	tim.tv_nsec = 500;

	write(1, "\e[32m", 5);
	sleep(1);
	write(1, "DEAR", 4);
	nanosleep(&tim, &tim2);
	write(1, " ", 1);
	sleep(1);
	write(1, "USER", 4);
	sleep(2);
	clear(9);
	sleep(1);
	write(1, "WELCOME", 8);
	sleep(1);
	write(1, " TO", 3);
	sleep(1);
	clear(11);
	sleep(1);
	write(1, "\e[36mKHANSMAN", 13);
	sleep(1);
	write(1, "\e[10m CDEBRUYN", 14);
	sleep(1);
	write(1, "\e[36m EHANSMAN", 14);
	sleep(2);
	clear(26);
	sleep(1);
	write(1, "\e[1mBoldLEM-IN", 11);
	sleep(2);
	clear(6);
}

int		main(void)
{
	int		i;
	//	t_env	data;

	i = 1;
	welcome();
	/*	data = get_data();
		while (1)
		{
		if (read_input(data) != 0)
		{
		i = scan(&data);
		reset(&data);
		}
		}*/
	return (0);
}	
