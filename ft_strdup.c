/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 23:33:53 by nfukuma           #+#    #+#             */
/*   Updated: 2022/07/06 12:11:05 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memalloc(size_t size)
{
	void	*res;

	res = malloc(size);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, size);
	return (res);
}

static char	*ft_strnew(size_t size)
{
	char	*newstr_mem;

	newstr_mem = ft_memalloc(size + 1);
	if (newstr_mem == NULL)
		return (NULL);
	return (newstr_mem);
}

char	*ft_strdup(const char *str)
{
	char	*dst;
	size_t	strlen;

	if (!str)
		return (NULL);
	strlen = ft_strlen(str);
	dst = ft_strnew(strlen);
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, str, strlen + 1);
	return (dst);
}
