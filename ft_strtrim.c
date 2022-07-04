/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:38:56 by nfukuma           #+#    #+#             */
/*   Updated: 2022/07/04 13:35:47 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static int	ft_setnum(const char *str, const char *set)
{
	int	num_rm;

	num_rm = 0;
	while (*str)
	{
		if (isset(*str++, set))
			num_rm++;
	}
	return (num_rm);
}

char	*ft_strtrim(const char *str, const char *set)
{
	int		i;
	char	*result;

	result = malloc(sizeof(char) * (ft_strlen(str) - ft_setnum(str, set) + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (*str)
	{
		if (isset(*str, set))
			str++;
		else
			result[i++] = *str++;
	}
	result[i] = '\0';
	return (result);
}
