/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:23:59 by tford             #+#    #+#             */
/*   Updated: 2022/01/28 14:49:38 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static long int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static void	ft_write_int(int nb, int fd)
{
	char	c;

	if (nb >= 10 || nb <= -10)
	{
		ft_write_int(nb / 10, fd);
	}
	c = ft_abs(nb % 10) + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
	}
	ft_write_int(n, fd);
}
