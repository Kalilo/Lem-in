/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 10:54:48 by khansman          #+#    #+#             */
/*   Updated: 2016/05/15 11:16:37 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int				k;
	unsigned int	l;

	k = 0;
	while (s[k])
	{
		l = *s;
		f(l, (char *)&s[k]);
		k++;
	}
}
