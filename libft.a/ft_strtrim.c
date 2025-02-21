/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:11:23 by seolee            #+#    #+#             */
/*   Updated: 2024/10/15 16:38:25 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include"libft.h"

bool	ft_valid(char c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set)
		{
			return (true);
		}
		set++;
	}
	return (false);
}

int	ft_st(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && ft_valid(s1[i], set))
		i++;
	return (i);
}

int	ft_ed(char const *s1, char const *set)
{
	int	j;

	j = (ft_strlen(s1) - 1);
	while (j >= 0 && ft_valid(s1[j], set))
	{
		j--;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	stl;
	size_t	edl;
	char	*trim;
	size_t	i;

	i = 0;
	stl = ft_st(s1, set);
	edl = ft_ed(s1, set);
	if (0 > (int)(edl - stl))
		return (ft_strdup(""));
	trim = malloc(edl - stl + 2);
	if (!trim)
		return (NULL);
	while (i < (edl - stl + 1))
	{
		trim[i] = s1[stl + i];
		i++;
	}
	trim[edl - stl + 1] = '\0';
	return (trim);
}
