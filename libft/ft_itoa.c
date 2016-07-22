/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 09:44:16 by khansman          #+#    #+#             */
/*   Updated: 2016/05/15 10:52:42 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_int_len(int n)
{
	int		k;

	if (n < 0)
		n = -n;
	k = 0;
	while (n > 0)
	{
		k++;
		n = n / 10;
	}
	return (k);
}

static char	*ft_zero_str(void)
{
	char	*str;

	str = (char *)malloc(2);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

static char	*ft_strrev(char *s)
{
	int		k;
	int		l;
	char	temp;

	k = 0;
	l = -1;
	while (s[l + 1] != '\0')
		l++;
	while (l > k)
	{
		temp = s[k];
		s[k] = s[l];
		s[l] = temp;
		l--;
		k++;
	}
	return (s);
}

static char	*ft_conv_int(int n, char *str)
{
	int		l;

	l = 0;
	while (n > 0)
	{
		str[l] = (char)((n % 10) + '0');
		l++;
		n = n / 10;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		l;

	l = ft_int_len(n);
	if (n < 0)
	{
		l++;
		str = (char *)malloc(l + 1);
		str = ft_conv_int((-n), str);
		str[l - 1] = '-';
	}
	else if (n == 0)
		return (ft_zero_str());
	else
	{
		str = (char *)malloc(l + 1);
		str = ft_conv_int(n, str);
	}
	str[l] = '\0';
	str = ft_strrev(&*str);
	return (str);
}
