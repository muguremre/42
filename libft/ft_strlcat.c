/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:50:20 by memre             #+#    #+#             */
/*   Updated: 2023/07/05 19:50:42 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	lensrc;
	size_t	i;
	size_t	totallen;
	size_t	lendst;

	j = 0;
	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (size > lendst)
		totallen = lendst + lensrc;
	else
		totallen = lensrc + size;
	j = lendst;
	while (src[i] && j + 1 < size)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = 0;
	return (totallen);
}
