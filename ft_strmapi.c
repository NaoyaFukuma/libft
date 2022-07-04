/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:45:42 by nfukuma           #+#    #+#             */
/*   Updated: 2022/06/17 11:41:04 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
