/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/03 18:54:57 by gbadi             #+#    #+#             */
/*   Updated: 2015/01/06 21:19:21 by gbadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		nb_words(char const *s, char c)
{
	int		i;
	int		len;
    
	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != c && s[i + 1] == c)
			len++;
		else if (s[i] != c && !s[i + 1])
			len++;
		i++;
	}
	return (len);
}

static int		len_split(char const *s, char c)
{
	int		len;
    
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char		*cpy_split(char *dst, char const *src, char c)
{
	int		i;
    
	i = 0;
	while (src[i] && src[i] != c)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char			**ft_strsplit(char const *s, int c)
{
	char	**tab;
	int		words;
	int		i;
    
	i = 0;
	tab = NULL;
	if (s)
	{
		words = nb_words(s, c);
		tab = (char **)malloc(sizeof(char *) * (words + 1));
		while (i < words)
		{
			while (*s == c)
				s++;
			tab[i] = (char *)malloc(sizeof(char) * (len_split(s, c)));
			cpy_split(tab[i], s, c);
			s += len_split(s, c);
			i++;
		}
		tab[i] = 0;
	}
	return (tab);
}
