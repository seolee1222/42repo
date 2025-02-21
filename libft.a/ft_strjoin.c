/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:26:57 by seolee            #+#    #+#             */
/*   Updated: 2024/10/15 18:16:00 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	join = (char *)malloc(i + j + 1);
	if (join == NULL)
		return (NULL);
	ft_strlcpy(join, s1, i + j + 1);
	ft_strlcpy(join + i, s2, i + j + 1);
	return (join);
}
