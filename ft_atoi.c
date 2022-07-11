/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:10:28 by nfukuma           #+#    #+#             */
/*   Updated: 2022/07/11 14:40:10 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static const char	*ft_sign_flag(const char *str, int *sign_flag)
{
	*sign_flag = 1;
	if (*str == '-')
	{
		str++;
		*sign_flag = -1;
	}
	else if (*str == '+')
		str++;
	return (str);
}

static int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(const char *str)
{
	long long	res;
	int			sign_flag;

	while (ft_isspace(*str))
		str++;
	str = ft_sign_flag(str, &sign_flag);
	res = 0;
	while (ft_isdigit(*str))
	{
		if (sign_flag == 1 && (res > ((LONG_LONG_MAX - (*str - '0'))
					* sign_flag) / 10))
			return ((int)LONG_MAX);
		else if (sign_flag == -1 && (res < ((LONG_LONG_MIN - (*str - '0'))
					* sign_flag) / 10))
			return ((int)LONG_MIN);
		res = (10 * res) + ((*str - '0') * sign_flag);
		str++;
	}
	return ((int)res);
}
