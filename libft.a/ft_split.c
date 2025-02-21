/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:49:23 by seolee            #+#    #+#             */
/*   Updated: 2024/10/19 16:56:46 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	wc(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	**subsplit(char **split, char const *s, char c);

char	**splfree(char **split);

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	count;

	if (!s)
		return (NULL);
	count = wc(s, c);
	split = (char **)malloc(sizeof(char *) * (count + 1));
	if (split == NULL)
		return (NULL);
	split = subsplit(split, s, c);
	if (split == NULL)
	{
		splfree(split);
		return (NULL);
	}
	split[count] = NULL;
	return (split);
}

char	**subsplit(char **split, char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	j;

	j = 0;
	i = 0;
	start = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			split[j] = ft_substr(s, start, i - start);
			if (split[j] == NULL)
				return (splfree(split));
			j++;
		}
		else
			i++;
	}
	return (split);
}

char	**splfree(char **split)
{
	size_t	i;

	i = 0;
	if (split)
	{
		while (split[i] != NULL)
		{
			free (split[i]);
			i++;
		}
		free (split);
	}
	return (NULL);
}
