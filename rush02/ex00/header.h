/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:34:04 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/17 20:15:18 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

int		ft_atoi(char *str);
int		main(int argc, char **argv);
int		ft_check_dict(char *str);
int		ft_check_num_in(char *str);
int		ft_measure(void);
int		ft_lstring(void);
int		ft_is_end(char *c, int i);
int 	ft_checkar(char *c);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_print_num(char **num, char **alpha, int i, int j);
void	ft_num(int i, int j);
void	ft_expo2string(int i);
void	ft_int2string(int i);
void	ft_printn(char *c, int i, int j);
void	ft_calcexpo(int k, char *c, int i);
void	ft_str_printer(char *c);
void	ft_save_dict(char **num, char **alpha);
void	ft_ls(char c, int fd, int ls1, int ls0);
void	ft_readnum(char c, int j, char **num, int fd);

#endif
