/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:48:00 by marvin            #+#    #+#             */
/*   Updated: 2023/07/19 19:10:50 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getlength(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*getstring(char const *s, int start, int end)
{
	int		i;
	char	*tmpptr;

	tmpptr = malloc(sizeof(char) * (end - start + 1));
	if (tmpptr == NULL)
		return (NULL);
	i = 0;
	while (start + i < end)
	{
		tmpptr[i] = s[start + i];
		i++;
	}
	tmpptr[i] = '\0';
	return (tmpptr);
}

void freememory(char **arrptr, int count)
{
	int i;

	i = 0;
	while (i < count)
	{
		free(arrptr[i]);
		i++;
	}
	free(arrptr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	int		start;
	char	**arrptr;

	if (s == NULL)
		return (NULL);
	arrptr = malloc(sizeof(char *) * (getlength(s, c) + 1));
	if (arrptr == NULL)
		return (NULL);
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			arrptr[count] = getstring(s, start, i);
			if (arrptr[count] == NULL)
			{
				freememory(arrptr, count);
				return (NULL);
			}
			count++;
		}
		else
			i++;
	}
	arrptr[count] = NULL;
	return (arrptr);
}
