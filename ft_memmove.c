/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 04:16:09 by wharinas          #+#    #+#             */
/*   Updated: 2022/02/19 00:16:44 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *des, const void *src, size_t size)
{
	if (!des && !src)
		return (0);
	if (des > src)
		while (size-- > 0)
			((char *)des)[size] = ((char *)src)[size];
	else
		ft_memcpy(des, src, size);
	return (des);
}
