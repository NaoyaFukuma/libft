/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:57:15 by nfukuma           #+#    #+#             */
/*   Updated: 2022/07/04 16:30:24 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	size_t	str_len;
	char	*res;
	char	*tmp;

	str_len = ft_strlen(str);
	if (str_len <= start && (start - 1))
	{
		res = malloc(sizeof(char));
		if (res == NULL)
			return (NULL);
		*res = '\0';
		return (res);
	}
	tmp = malloc(sizeof(char) * ((str_len - start) + 1));
	if (tmp == NULL)
		return (NULL);
	res = tmp;
	while (start--)
		str++;
	while (len-- && *str)
		*tmp++ = *str++;
	*tmp = '\0';
	return (res);
}
