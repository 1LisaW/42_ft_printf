/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:34:53 by root              #+#    #+#             */
/*   Updated: 2023/06/06 20:00:45 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printchar(char c)
{
	char	*res;

	res = NULL;
	res = (char *)malloc(2 * sizeof(char));
	if (!res)
		return (NULL);
	res[0] = c;
	res[1] = '\0';
	return (res);
}
