#ifndef LEM_IN_H
# define LEM_IN_H

/*
**Includes
*/

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include "libft.h"

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

/*
**				room_type:
**				0 -> normal
**				1 -> start
**				2 -> end
*/

typedef struct		s_room
{
	int				room;
	int				room_type;
	int				x;
	int				y;
	int				no_ants;
	t_link			*links;
	t_room			*next;
}					t_room;

typedef struct		s_env
{
	int				no_ants;
	int				no_rooms;
	t_room			*start;
	int				end_room;
	t_list			path;
}					t_env;

/*
**Prototypes
*/

/*
**			file: data_types.c
*/

int					is_link(char *line);
int					is_room(char *line);
int					data_type(char *line);

/*
**			file: debug.c
*/

void				print_rooms(t_room *room);
void				print_links(t_link *link);

/*
**			file: find_path.c
*/

int					check_option(t_env *env, t_list *path);
int					scan_paths(t_env *env, t_list *path);
int					*find_path(t_env *env);

/*
**			file: get_line.c
*/

char				*re_malloc(char *line, size_t size);
int					get_line(int fd, char **line);

/*
**			file: lem-in.c
*/

/*
**			file: link_add.c
*/

int					add_room_link(t_link *l, int room);
int					add_room(t_room *l, int room);

/*
**			file: link_count.c
*/

int					count_room(t_room *room);
int					count_link(t_link *link);

/*
**			file: link_del.c
*/

int					del_room_list(t_room *room);
int					del_link_list(t_link *link);
int					del_room(t_room *room, t_room *previous);
int					del_link(t_link *link, t_link *previous);

/*
**			file: link_scan.c
*/

int					is_in_list_room(t_room *rooms, int room);
int					is_in_list_link(t_link *link, int room);
t_room				find_room(t_room *rooms, int room);
t_link				find_link(t_link *link, int room);
int					find_next_link_room(t_link *link, int room);

/*
**			file: print_strings.c
*/

void				print_strings(char *colour, char *str, int unprint);

/*
**Notes:
**		Work in progress...
**
** >>> TO_DO <<<
Lee:

Cam:
->	Display

E:
->	Reading input
->	Sleep display

** >>> DONE <<<

Lee:
	path finding functions.
	debug functions for both linked lists;

Cam:

E:
*/

#endif
