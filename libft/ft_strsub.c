/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 11:37:27 by khansman          #+#    #+#             */
/*   Updated: 2016/05/15 11:26:42 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*temp;
	unsigned int	k;

	k = start;
	temp = (char *)malloc((unsigned int)len);
	while ((k < len + start) && s[k] != '\0')
	{
		temp[k - start] = s[k];
		k++;
	}
	temp[k] = '\0';
	return (temp);
}
