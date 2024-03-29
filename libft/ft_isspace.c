/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 15:12:02 by gbadi             #+#    #+#             */
/*   Updated: 2015/01/06 21:10:30 by gbadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\f'
			|| c == '\n' || c == '\v' || c == '\r')
		return (1);
	return (0);
}
