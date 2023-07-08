/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:39:53 by memre             #+#    #+#             */
/*   Updated: 2023/07/05 20:40:18 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	unsigned char	*strtosrc;
	size_t			i;

	strtosrc = (unsigned char *)memoryBlock;
	i = 0;
	while (i < size)
	{
		if (*strtosrc == (unsigned char)searchedChar)
			return (strtosrc);
		strtosrc++;
		i++;
	}
	return (NULL);
}
