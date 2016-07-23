#include "lem-in.h"

int     display_solution1(t_list *path, int ants)
{
	t_list	    *active;
    t_list      *inc;

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
            ants--;
        }
        print_links(active);//debug temp
        //if ()
    }
}
