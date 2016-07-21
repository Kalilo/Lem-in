#include "lem-in.h"

int		count_room(t_room *room)
{
	int		k;

	k = 1;
	while (room->next != NULL)
	{
		k++;
		room = room->next;
	}
	return (k);
}

int		count_link(t_link *link)
{
	int		k;

	k = 1;
	while (link->next != NULL)
	{
		k++;
		link = link->next;
	}
	return (k);
}
