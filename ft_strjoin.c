/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:24:53 by tford             #+#    #+#             */
/*   Updated: 2022/01/21 16:06:17 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	//unchecked
	char	*p;
	size_t s1_size;
	size_t s2_size;

	p = (char *)malloc((s1_size + s2_size + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	s1_size = ft_strlcpy(p, s1, ft_strlen(s1));
	ft_strlcpy(p + s1_size, s2, ft_strlen(s2) + 1);
	return (p);
}
