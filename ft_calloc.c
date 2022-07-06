/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:36:25 by nfukuma           #+#    #+#             */
/*   Updated: 2022/06/17 11:09:30 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char			*res;
	unsigned int	i;

	if (num >= (SIZE_MAX / size))
		return (NULL);
	res = malloc(num * size);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < (num * size))
		res[i++] = 0;
	return ((void *)res);
}
