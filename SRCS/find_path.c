#include "lem-in.h"

int		check_option(t_env *env, t_list *path)
{
	if (is_in_list_link(room->links, env->end_room))
		add_room_link(path, env->end_room);
	if (count_room(path) < count_room(env->path))
	{
		del_link_list(env->path);
		env->path = path;
		return (1);
	}
	return (0);		
}

int		scan_paths(t_env *env, t_list *path)
{
	t_list	link;

	if (is_in_list_link(room->links, env->end_room))
	{
		check_option(env, path);
		del_link_list(path);
		return (1);
	}
	link = room->links;
	while (link != NULL)
	{
		if (!(is_in_list_link(path, link->room)))
			scan_paths(env,
					add_room_link(path, link->room));
		link = link->next;
	}
	del_link_list(path);
	return (2);
}

int		*find_path(t_env *env)
{
	scan_paths(env, env->start);
	if (env->path == NULL)
		return (0);
	return (1);
}
