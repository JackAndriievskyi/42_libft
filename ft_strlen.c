/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 14:15:32 by yandriie          #+#    #+#             */
/*   Updated: 2017/10/25 16:41:23 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

size_t		ft_strlen(const char *s)
{
	size_t	length;

	length = -1;
	while (s[++length] != '\0')
		;
	return (length);
}