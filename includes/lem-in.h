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

#endif
