# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 13:05:48 by aben-ham          #+#    #+#              #
#    Updated: 2021/12/17 23:03:21 by aben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES_EX = utils.c\
		client_list.c\
		hamming_code/hamming.a\
		ft_printf/libftprintf.a

all:
	gcc server.c $(FILES_EX) -o server.out
	gcc client.c $(FILES_EX) -o client.out