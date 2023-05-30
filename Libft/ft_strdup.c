/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:07:52 by seono             #+#    #+#             */
/*   Updated: 2023/05/25 16:34:55 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    int i;
    int ptrSize;
    char *ptr;

    ptrSize = ft_strlen(s);
    ptr = NULL;
    ptr = malloc(sizeof(char) * (ptrSize + 1));
    if (ptr == NULL)
        return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
