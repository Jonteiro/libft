/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josilvei <josilvei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 11:57:45 by josilvei          #+#    #+#             */
/*   Updated: 2023/01/08 15:17:31 by josilvei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*new;

	len = ft_strlen(s);
	new = malloc(sizeof(char) * (len + 1));
	if (new == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= len)
	{
		new[i] = s[i];
		i++;
	}
	return (new);
}
