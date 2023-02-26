/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferreir <dferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:34:38 by dferreir          #+#    #+#             */
/*   Updated: 2023/02/26 13:46:59 by dferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/minishell.h"

void	mini_env(char **envp)
{
	int	i;

	i = -1;
	while(envp[++i])
		ft_printf("%s\n", envp[i]);
}
