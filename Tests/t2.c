#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int		k = 0;

	write(1, "Hello World!", 12);
	sleep(1);
//	while (k++ < 12)
//		write(1, "\b \b", 3);
	write(1, "Nothing here.\n", 14);
}
