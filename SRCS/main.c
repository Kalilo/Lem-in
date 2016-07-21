//#include "../includes/lem-in.h"
#include <unistd.h>

void	welcome(void)
{
	int		timer;

	timer = 0;
	sleep(1);
	write(1, "W", 1);
//	sleep(1);
	write(1, "E", 1);
//	sleep(1);
	write(1, "L", 1);
	sleep(1);
	write(1, "C", 1);
//	sleep(1);
	write(1, "O", 1);
//	sleep(1);
	write(1, "M", 1);
	sleep(1);
	write(1, "E", 1);
	sleep(2);
	write(1, "\n", 1);
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
