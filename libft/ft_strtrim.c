/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:41:12 by gbadi             #+#    #+#             */
/*   Updated: 2015/01/07 04:45:08 by gbadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	int				i;
	int				len;

	i = 0;
	len = ft_strlen(s) - 1;
	if (!s)
		return (0);
	while (ft_isspace(s[i]))
		i++;
	while (ft_isspace(s[len]))
		len--;
	if (len == 0)
		return (0);
	dprintf(1, "len = %d i = %d\n", len , i);
	return (ft_strsub(s, i, len - i + 1));
}
