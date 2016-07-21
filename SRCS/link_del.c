#include "lem-in.h"

int	del_room_list(t_room *room)
{
	t_room	*temp;

	if (room->next == NULL)
		return (0);
	while (room->next != NULL)
	{
		temp = room->next;
		free(*room);
		room = temp;
	}

	return (1);
}

int	del_link_list(t_link *link)
{
	t_link *temp;

	if (link->next == NULL)
		return (0);
	while (link->next == NULL)
	{
		temp = room->next;
		free(*room);
		room = temp;
	}
	return (1);
}
