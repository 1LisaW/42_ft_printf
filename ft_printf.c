/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 21:49:08 by root              #+#    #+#             */
/*   Updated: 2023/06/06 21:44:37 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_getstr(const char **p_format, char **p_res)
{
	char	*str;
	int		i;

	str = NULL;
	i = 0;
	if (**p_format && **p_format != '%')
	{
		while ((*p_format)[i] && (*p_format)[i] != '%')
			i++;
		str = (char *)malloc((i + 1) * sizeof(char));
		if (!str)
			return (-1);
		ft_strcopy(str, (char *)*p_format, 0, i);
		i = ft_strjoin(p_res, str);
		return (i);
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	char	*res;
	int		count;

	res = NULL;
	count = 0;
	va_start(args, format);
	count += ft_getstr(&format, &res);
	va_end(args);
	ft_printstr(res);
	write(1, "\n", 1);
	return (count);
}
