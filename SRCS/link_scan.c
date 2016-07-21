#include "lem-in.h"

int		is_in_list_room(t_room *rooms, int room)
{
	while (rooms->room != room && rooms->next != NULL)
		rooms = rooms->next;
	if (rooms->room == room)
		return (1);
	return (0);
}

int		is_in_list_link(t_link *link, int room)
{
	while (link->room != room && link->next != NULL)
		link = link->next;
	if (link->room == room)
		return (1);
	return (0);
}
