/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josilvei <josilvei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 11:56:37 by josilvei          #+#    #+#             */
/*   Updated: 2023/01/08 18:49:44 by josilvei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total;
	void			*p;

	total = nmemb * size;
	p = malloc(total);
	if (!p)
		return (NULL);
	ft_bzero(p, total);
	return ((void *)p);
}
