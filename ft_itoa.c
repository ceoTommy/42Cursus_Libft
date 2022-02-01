/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:44:45 by tford             #+#    #+#             */
/*   Updated: 2022/01/25 13:56:54 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static long int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static int	ft_ndigits(int n)
{
	int	digits;

	digits = 1;
	while (n > 9 || n < -9)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	int		digits;
	char	*str;
	int		minus;

	digits = ft_ndigits(n);
	minus = 0;
	if (n < 0)
		minus = 1;
	str = (char *) ft_calloc(digits + minus + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (digits--)
	{
		str[digits + minus] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	if (minus)
		str[0] = '-';
	return (str);
}
