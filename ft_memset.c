/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 23:08:17 by nfukuma           #+#    #+#             */
/*   Updated: 2022/06/17 11:38:58 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int c, size_t size)
{
	unsigned char	*buf_cpy;

	buf_cpy = (unsigned char *)buf;
	while (size--)
		*buf_cpy++ = (unsigned char)c;
	return (buf);
}
