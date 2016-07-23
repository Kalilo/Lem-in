#include "lem-in.h"

int		is_link(char *line)
{
	int		found;
	int		k;

	k = -1;
	found = 0;
	while (++k && line[k] != '\0')
	{
		if (k == 0 && *line == '-')
			return (-1);
		else if (k > 0 && line[k] == '-' && line[k + 1] == '\0')
			return (-1);
		else if (('0' > str[k] || str[k] > '9') && str[k] != '-')
			return (0);
		else if (str[k] == '-')
			found++;
		else if (found > 1)
			return (-1);
	}
	return (1);
}

int		is_room(char *line)
{
	int		found;
	int		k;

	found = 0;
	k = -1;
	while (++k && line[k] != '\0')
	{
		if (line[k] == ' ')
			found++;
		if (found > 2)
			return (-1);
		if ((line[k] < '0' || line[k] > '9') && line[k] != ' ')
			return (-1);
	}
	return (1);
}


int		data_type(char *line)
{
	if (is_room(line))
		return (2);
	else if (is_link(line))
		return (3);
	else if (!strchr(line, "#start"))
		return (4);
	else if (!(strchr(line, "#end")))
		return (5);
	else if (*line == '#')
		return (6)
	return (0);
}
