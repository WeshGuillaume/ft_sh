/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minishellrc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/03 06:05:00 by gbadi             #+#    #+#             */
/*   Updated: 2015/01/10 17:54:06 by gbadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minishell1.h"

void			ft_minishellrc(t_alias **alias, char ***env, t_list **history)
{
	char				*cmd;
	int					fd;
	int					line;
	int					ret;

	line = 0;
	fd = open("minishell1rc", O_RDONLY);
	while (get_next_line(fd, &cmd) > 0)
	{
		if (cmd[0] != '#' && ft_strlen(cmd) > 0)
			ret = ft_get_command(cmd, env, alias, history);
		line++;
		if (ret != 0)
			ft_iformat("Minishell One: error line ^ of minishellrc\n", line);
	}
	close(fd);
}
