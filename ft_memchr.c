/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 22:40:05 by nfukuma           #+#    #+#             */
/*   Updated: 2022/06/08 11:32:48 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t n)
{
	const char			*c_ptr = (const char *)buf;
	const unsigned char	uc = (const unsigned char)c;

	while (n--)
	{
		if (*c_ptr == uc)
			return ((void *)c_ptr);
		c_ptr++;
	}
	return (NULL);
}
