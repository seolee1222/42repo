/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:38:48 by seolee            #+#    #+#             */
/*   Updated: 2024/10/15 18:28:16 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (!dest && !src && num > 0)
		return (NULL);
	if (!dest || !src)
		return (dest);
	while (i < num)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
