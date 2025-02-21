/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:31:17 by seolee            #+#    #+#             */
/*   Updated: 2024/10/18 21:33:58 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s = (const unsigned char *)src;
	unsigned char		*d;

	d = (unsigned char *)dest;
	if (n == 0 || d == s)
		return (dest);
	if (d < s)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		s += n;
		d += n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dest);
}
