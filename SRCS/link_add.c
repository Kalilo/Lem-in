#include "lem-in.h"

int		add_room_link(t_link **l, int room)
{
	t_link		*link;

	if (!(link = (t_link *)malloc(sizeof(t_link))))
		return (0);
	link->room = room;
	*l = link;
	return (1);
}

int		add_room(t_room **l, int room)
{
	t_room		*link;

	if (!(link = (t_room *)malloc(sizeof(t_room))))
		return (0);
	link->room = room;
	link->x = 0;
	link->y = 0;
	link->no_ants = 0;
	link->links = NULL;
	link->next = NULL;
}
