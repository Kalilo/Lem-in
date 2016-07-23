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

t_room	find_room(t_room *rooms, int room)
{
	while (rooms->room != room && rooms->next != NULL)
		rooms = rooms->next;
	if (rooms->room == room)
		return (rooms);
	return (NULL);
}

t_link	find_link(t_link *link, int room)
{
	while (link->room != room && link->next != NULL)
		link = link->next;
	if (link->room == room)
		return (link);
	return (NULL);
}

int		find_next_link_room(t_link *link, int room)
{
	if (link == NULL)
		return (room);
	while (link->room != room && link->next != NULL)
		link = link->next;
	if (link->next != NULL)
	{
		link = link->next;
		return (link->room);
	}
	return (room);
}
