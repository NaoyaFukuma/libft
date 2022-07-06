/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 23:14:48 by nfukuma           #+#    #+#             */
/*   Updated: 2022/06/29 10:10:38 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	char		*dst_cpy;
	const char	*src_cpy;

	dst_cpy = (char *)dst;
	src_cpy = (const char *)src;
	if (dst_cpy <= src_cpy)
	{
		while (size--)
			*dst_cpy++ = *src_cpy++;
	}
	else
	{
		dst_cpy += size;
		src_cpy += size;
		while (size--)
			*--dst_cpy = *--src_cpy;
	}
	return (dst);
}
