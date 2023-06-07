/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:25:42 by tklimova          #+#    #+#             */
/*   Updated: 2023/06/06 20:40:14 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

int	ft_strcopy(char *dst, char *src, int start_i, int end_i)
{
	int	i;

	i = 0;
	while (src && src[i] && i < end_i)
	{
		dst[start_i + i] = src[i];
		i++;
	}
	dst[start_i + i] = '\0';
	return (start_i + i);
}

int	ft_strjoin(char **dst, char *src)
{
	char	*res;
	int		i;

	res = NULL;
	i = 0;
	res = (char *)malloc((ft_strlen(*dst) + ft_strlen(src) + 1) * sizeof(char));
	if (res)
	{
		i = ft_strcopy(res, *dst, 0, ft_strlen(*dst));
		i = ft_strcopy(res, src, i, ft_strlen(src));
	}
	free(*dst);
	free(src);
	*dst = res;
	return (i);
}
