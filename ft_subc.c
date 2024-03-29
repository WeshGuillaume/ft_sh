/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/25 08:00:52 by gbadi             #+#    #+#             */
/*   Updated: 2015/01/03 05:50:00 by gbadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

char				*ft_sub_space(char *s)
{
	int				i;
	char			*str;

	i = 0;
	str = NULL;
	while (s[i] && s[i] != ' ' && s[i] != '\t')
		i++;
	if (s[i] == ' ' || s[i] == '\t')
		str = ft_strndup(s, i);
	return (str);
}

char				*ft_subc(char *s, char c)
{
	int				i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (ft_strsub(s, 0, i));
}
