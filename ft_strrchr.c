/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharinas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:15:08 by wharinas          #+#    #+#             */
/*   Updated: 2022/02/16 18:34:41 by wharinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	*str_temp;

	str_temp = 0;
	if (*str == c)
		str_temp = (char *)str;
	while (*str++)
	{
		if (*str == c)
			str_temp = (char *)str;
	}
	return (str_temp);
}
