/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josilvei <josilvei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:37:01 by josilvei          #+#    #+#             */
/*   Updated: 2023/01/08 14:17:13 by josilvei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int src, size_t size)
{
	char	*a;

	a = (char *)dest;
	while (size > 0)
	{
		a[size - 1] = src;
		size--;
	}
	return (dest);
}
