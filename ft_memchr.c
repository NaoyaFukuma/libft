/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 22:40:05 by nfukuma           #+#    #+#             */
/*   Updated: 2022/07/11 13:13:04 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t n)
{
	char	*b;
	size_t	i;

	b = (char *)buf;
	i = 0;
	while (i < n)
	{
		if (b[i] == (unsigned char)c)
			return ((void *)&b[i]);
		i++;
	}
	return (NULL);
}
