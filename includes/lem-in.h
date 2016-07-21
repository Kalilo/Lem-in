#ifndef LEM-IN_H
# define LEM-IN_H

/*
**Includes
*/

/*
**Defines
*/

/*
**Structures
*/

typedef struct		s_link
{
	int				room;
	struct s_link	*next;		
}					t_link;

typedef struct		s_room
{
	int				room;
	int				x;
	int				y;
	int				no_ants;
	t_link			*links;
	t_room			*next;
}					t_room;

typedef struct		s_env
{
	int				no_ants;
	int				no_roooms;
	t_room			*start;
}					t_env;

/*
**Prototypes
*/

/*
**			file: lem-in.c
*/

/*
**			file: link_add.c
*/

int					add_room_link(t_link **l, int room);
int					add_room(t_room **l, int room);

/*
**			file: link_del.c
*/

int					del_room_list(t_room *room);
int					del_link_list(t_link *link);
int					del_room(t_room *room, t_room *previous);
int					del_link(t_link *link, t_link *previous);
/*
**Notes:
**		Work in progress...
*/

#endif
