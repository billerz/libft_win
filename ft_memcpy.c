/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 04:08:52 by wharinas          #+#    #+#             */
/*   Updated: 2022/02/16 16:00:24 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *restrict des, const void *restrict src, size_t size)
{
	size_t		i;
	char		*des_temp;

	des_temp = des;
	if (!des && !src)
		return (0);
	i = 0;
	while (i < size)
	{
		((unsigned char *)des_temp)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (des);
}
