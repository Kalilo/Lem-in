/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 08:13:31 by khansman          #+#    #+#             */
/*   Updated: 2016/05/15 10:43:23 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	k;
	char	*temp;

	k = 0;
	temp = (char *)s;
	while (k < n && (unsigned long)k < sizeof(temp))
	{
		temp[k] = '\0';
		k++;
	}
}
