/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 21:48:35 by root              #+#    #+#             */
/*   Updated: 2023/06/06 21:40:13 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

union u_data
{
	int				number;
	unsigned char	ch;
};

enum	e_conv {
	c,
	s,
	d,
	x,
	X
};

void	ft_printstr(char *str);

int		ft_strlen(char *str);

int		ft_strcopy(char *dst, char *src, int start_i, int end_i);

int		ft_strjoin(char **dst, char *src);

char	*ft_printchar(char c);

int		ft_printf(const char *str, ...);

#endif
