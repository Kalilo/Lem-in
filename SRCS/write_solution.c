#include "lem-in.h"

void	print_move(t_list *move)
{
	while (move)
	{
		ft_putchar("L");
		ft_atoi(move->ant);
		ft_putchar("-");
		ft_atoi(move->room);
		if (move->next != NULL)
			ft_putchar(' ');
		move = move->next;
	}
	ft_putchar('\n');
}

int     display_solution1(t_list *path, int ants)
{
	t_list	    *active;
    t_list      *inc;
    int			act_ants;

    *active = NULL;
    while (ants > 0 || active != NULL)
    {
        inc = active;
        while (inc != NULL)
        {
            inc->room = find_next_link_room(path, inc->room);
            inc = inc->next;
        }
        if (ants > 0)
        {
            add_room_link(active, path->room);
            //need to add a variable to room, to keep track of which ant is in it.
            ants--;
            act_ants++;
        }
        print_move(active);
    }
}
