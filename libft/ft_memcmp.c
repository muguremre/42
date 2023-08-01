/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:38:09 by memre             #+#    #+#             */
/*   Updated: 2023/07/09 16:06:05 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	const unsigned char	*ptr1;
	int					i;
	const unsigned char	*ptr2;

	i = 0;
	ptr1 = (const unsigned char *)pointer1;
	ptr2 = (const unsigned char *)pointer2;
	while (size--)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
