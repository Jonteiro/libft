/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josilvei <josilvei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 11:53:08 by josilvei          #+#    #+#             */
/*   Updated: 2023/01/08 18:08:48 by josilvei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (0);
	if ((int)n < 0)
		return (-1);
	while (str1[i] && str2[i] && str1[i] == str2[i] && i < (int)n - 1)
		i++;
	if (str1[i] == str2[i])
	{
		return (0);
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
