/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:10:28 by nfukuma           #+#    #+#             */
/*   Updated: 2022/07/11 16:32:37 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	long	res;
	long	long_max;
	long	long_min;
	int		sign_flag;

	while (ft_isspace(*str))
		str++;
	str = ft_sign_flag(str, &sign_flag);
	res = 0;
	long_max = 9223372036854775807;
	long_min = -9223372036854775807;
	long_min -= 1;
	while (ft_isdigit(*str))
	{
		if (sign_flag == 1 && (res > ((long_max - (*str - '0')) * sign_flag)
				/ 10))
			return ((int)long_max);
		else if (sign_flag == -1 && (res < ((long_min - (*str - '0'))
					* sign_flag) / 10))
			return ((int)long_min);
		res = (10 * res) + ((*str - '0') * sign_flag);
		str++;
	}
	return ((int)res);
}
