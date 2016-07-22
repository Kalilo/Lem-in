/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 07:35:56 by khansman          #+#    #+#             */
/*   Updated: 2016/05/15 10:57:45 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	k;
	char	*d;
	char	*s;

	k = 0;
	d = (char *)dst;
	s = (char *)src;
	while (k < len && s[k] != d[0])
	{
		d[k] = s[k];
		k++;
	}
	return (d);
}
