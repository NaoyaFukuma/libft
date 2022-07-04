/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:57:29 by nfukuma           #+#    #+#             */
/*   Updated: 2022/07/04 15:39:22 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *target, size_t size)
{
	size_t	target_len;

	target_len = ft_strlen(target);
	if (target_len == 0)
		return ((char *)str);
	if (size == 0)
		return (NULL);
	size -= (target_len - 1);
	while (*str && size--)
	{
		if (*str == *target && !(ft_strncmp(str, target, target_len)))
			return ((char *)str);
		str++;
	}
	return (NULL);
}
