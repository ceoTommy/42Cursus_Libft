/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:49:30 by tford             #+#    #+#             */
/*   Updated: 2022/01/19 16:55:02 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

char			ft_isalpha(char c);
char			ft_isdigit(char c);
char			ft_isalnum(char c);
char			ft_isascii(char c);
char			ft_isprint(char c);
size_t			ft_strlen(const char *str);
void			*ft_memset(void *str, int c, size_t len);

#endif
