/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:56:23 by nfukuma           #+#    #+#             */
/*   Updated: 2022/07/04 14:31:59 by nfukuma          ###   ########.fr       */
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

char	*ft_strnew(size_t size)
{
	char	*newstr_mem;

	newstr_mem = ft_memalloc(size + 1);
	if (newstr_mem == NULL)
		return (NULL);
	return (newstr_mem);
}
