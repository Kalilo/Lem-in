/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 13:15:10 by khansman          #+#    #+#             */
/*   Updated: 2016/05/15 11:15:28 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	size_t	k;
	char	*copy;

	k = 1;
	while (s1[k - 1] != '\0')
		k++;
	if (!(copy = malloc((unsigned int)k)))
		return (NULL);
	while (k > 0)
	{
		copy[k] = s1[k];
		k--;
	}
	return (copy);
}
