/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:44:31 by nfukuma           #+#    #+#             */
/*   Updated: 2022/06/16 18:48:35 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *str, size_t maxlen)
{
	size_t	len;

	len = 0;
	while (len < maxlen)
	{
		if (!*str)
			break ;
		str++;
		len++;
	}
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;

	lendst = ft_strnlen(dst, size);
	lensrc = ft_strlen(src);
	if (size <= lendst)
		return (lensrc + size);
	size -= (lendst + 1);
	while (*dst)
		dst++;
	while (*src && size--)
		*dst++ = *src++;
	*dst = '\0';
	return (lendst + lensrc);
}
