/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:45:42 by nfukuma           #+#    #+#             */
/*   Updated: 2022/07/08 23:04:40 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*map_s;
	size_t	i;

	map_s = malloc(ft_strlen(s) + 1);
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
