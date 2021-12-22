/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:36:29 by aben-ham          #+#    #+#             */
/*   Updated: 2021/12/22 16:44:39 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <stdlib.h>
# include <signal.h>

# define WAIT_TIME_S 20
# define WAIT_TIME_C 50
# define TIME_OUT 5000000

typedef struct s_client
{
	pid_t			pid;
	unsigned char	res;
	int				bit;
	char			*data;
	size_t			size;
	size_t			i;
}	t_client;

void	ft_putnbr(int nb);
int		ft_atoi(const char *str);

#endif
