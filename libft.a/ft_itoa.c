/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:49:52 by seolee            #+#    #+#             */
/*   Updated: 2024/10/15 18:29:29 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	len(int n)
{
	int	l;

	l = 0;
	if (n < 0)
	{
		n = -n;
		l++;
	}
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		l++;
	}
	return (l);
}

int	exhandle(int n, char *s)
{
	if (n == 0)
	{
		s[0] = '0';
	}
	if (n < 0)
	{
		if (n == -2147483648)
		{
			s[1] = '2';
			n = -147483648;
		}
		n = -n;
		s[0] = '-';
	}
	return (n);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		l;

	l = len(n);
	s = malloc(l + 1);
	if (s == NULL)
		return (NULL);
	n = exhandle(n, s);
	s[l] = '\0';
	while (n > 0)
	{
		s[--l] = (n % 10) + '0';
		n /= 10;
	}
	return (s);
}
