/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrpr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:21:45 by seolee            #+#    #+#             */
/*   Updated: 2024/11/01 16:28:32 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	mptr(unsigned long long n)
{
	unsigned int	len;

	len = 1;
	while (n > 15)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

int	ft_ptrpr(unsigned long long n)
{
	int		ptrlen;
	char	*hex;
	char	*s;
	int		count;

	if (n == 0)
		return (write(1, "(nil)", 5));
	ptrlen = mptr(n);
	hex = "0123456789abcdef";
	s = malloc(ptrlen + 3);
	if (!s)
		return (0);
	s[0] = '0';
	s[1] = 'x';
	s[ptrlen + 2] = '\0';
	while (n > 0)
	{
		s[--ptrlen + 2] = hex[n % 16];
		n = n / 16;
	}
	count = ft_putstr_fd(s, 1);
	free(s);
	return (count);
}
