/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:50:11 by ayoub             #+#    #+#             */
/*   Updated: 2021/12/07 15:28:35 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int get_server_pid()
{
	int pid;

	FILE *f = fopen("ppid", "r");
	fscanf(f, "%d", &pid);
	fclose(f);
	return (pid);
}

void share_server_pid()
{
	FILE *f = fopen("ppid", "w");
	fprintf(f, "%d", getpid());
	fclose(f);
}