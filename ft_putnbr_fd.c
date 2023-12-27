/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josilvei <josilvei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:51:27 by josilvei          #+#    #+#             */
/*   Updated: 2023/01/08 17:52:34 by josilvei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	c;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		num = (long)(-n);
	}
	else
		num = (long)(n);
	if (num > 9)
		ft_putnbr_fd((int)(num / 10), fd);
	c = (num % 10) + '0';
	write(fd, &c, 1);
}
