/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:42:05 by seono             #+#    #+#             */
/*   Updated: 2023/06/07 15:43:11 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (('0' <= c && c <= '9') || ('a' <= c && c <= 'z') || ('A' <= c
			&& c <= 'Z'))
		return (1);
	return (0);
}
