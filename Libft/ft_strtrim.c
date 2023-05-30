/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:51:50 by marvin            #+#    #+#             */
/*   Updated: 2023/05/29 15:52:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int start;
    int end;
    char *ptr;

    start = 0;
    end = ft_strlen(s1) - 1;
    while (s1[start] != NULL && ft_strchr(set, s1[start]) != NULL)
        start++;
    while (start < end && ft_strchr(set, s1[end]) != NULL)
        end--;
    ptr = malloc(sizeof(char) * (end - start + 1));
    if (ptr == NULL)
        return (NULL);
    i = 0;
    while (start + i < end)
    {
        ptr[i] = s1[start + i];
        i++;
    }
    return (ptr);
}