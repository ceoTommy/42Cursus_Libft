/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:49:30 by tford             #+#    #+#             */
/*   Updated: 2022/02/02 11:49:52 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	word_count(char const *s, char delim)
{
	size_t	words;
	size_t	i;
	char	lookword;

	words = 0;
	lookword = 1;
	i = 0;
	while (s[i])
	{
		if (lookword && s[i] != delim)
		{
			lookword = 0;
			words++;
		}
		else if (!lookword && s[i] == delim)
		{
			lookword = 1;
		}
		i++;
	}
	return (words);
}

//returns new string and also changes s to the next delim in it
static char	*delim_str(char const **s, char c)
{
	char	*str;
	size_t	len;

	len = 0;
	while (**s && **s == c)
		(*s)++;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	str = (char *) malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, *s, len + 1);
	*s = *s + len;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**strs;
	size_t	i;

	if (s == NULL)
		return (NULL);
	words = word_count(s, c);
	strs = (char **) malloc((words + 1) * sizeof(char *));
	if (strs == NULL)
		return (NULL);
	i = 0;
	while (i < words)
	{
		strs[i] = delim_str(&s, c);
		if (strs[i] == NULL)
			return (NULL);
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
