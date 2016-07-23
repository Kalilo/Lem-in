#include "lem-in.h"

void	print_rooms(t_room *room)
{
	if (room == NULL)
		return ;
	ft_putstr("\nRoom Details:\n");
	ft_putstr("Room: ");
	ft_putnbr(rooom->room);
	ft_putstr("\nRoom type: ");
	ft_putnbr(room->room_type);
	ft_putstr("\nX coord: ");
	ft_putnbr(room->x);
	ft_putstr("\nY coord: ");
	ft_putnbr(room->y);
	ft_putstr("\nNumber of Ants: ");
	ft_putnbr(room->no_ants);
	ft_putstr("\n");
	print_links(room->links);
	if (room->next != NULL)
		print_rooms(room->next);
}

void	print_links(t_link *link)
{
	if (link == NULL)
		return ;
	ft_putstr("Link: \nRoom :");
	ft_putnbr(link->room);
	ft_putstr("\n");
	if (link->next != NULL)
		print_links(link->next);
}
