/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:45:42 by nfukuma           #+#    #+#             */
/*   Updated: 2022/07/06 12:11:20 by nfukuma          ###   ########.fr       */
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map_s;
	unsigned int	i;

	map_s = ft_strnew(ft_strlen(s));
	if (map_s == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		map_s[i] = f(i, s[i]);
		i++;
	}
	return (map_s);
}
