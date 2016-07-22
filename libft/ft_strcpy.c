/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 08:54:26 by khansman          #+#    #+#             */
/*   Updated: 2016/05/15 11:14:47 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	k;
	char	*result;

	k = 0;
	while ((dst[k] = src[k]) != 0 && k < len)
		k++;
	result = &dst[k];
	return (result);
}
