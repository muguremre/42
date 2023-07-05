/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:33:06 by memre             #+#    #+#             */
/*   Updated: 2023/07/05 20:33:17 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void
	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;

	if (!b)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
