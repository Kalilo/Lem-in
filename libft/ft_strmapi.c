/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 11:08:36 by khansman          #+#    #+#             */
/*   Updated: 2016/05/15 12:03:58 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				k;
	char			*temp;

	k = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[k] != '\0')
		k++;
	temp = (char *)malloc(k + 1);
	k = 0;
	while (s[k])
	{
		temp[k] = f(s[k], s[k]);
		k++;
	}
	temp[k] = '\0';
	return (temp);
}
