/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:38:26 by nfukuma           #+#    #+#             */
/*   Updated: 2022/07/04 13:58:17 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static char	*ft_recursive_cleate_str(char *str, int n)
{
	if (n / 10)
		str = ft_recursive_cleate_str(str, (n / 10));
	*str++ = (n % 10 + '0');
	return (str);
}

static int	ft_get_digits(int n)
{
	int	digits;

	if (n == -2147483648)
		return (11);
	digits = 1;
	while (n / 10)
	{
		n /= 10;
		digits++;
	}
	return (digits + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	char	*tmp_str;

	str = malloc(sizeof(char) * ft_get_digits(n));
	if (str == NULL)
		return (NULL);
	tmp_str = str;
	if (n < 0)
	{
		*tmp_str++ = '-';
		if (n == -2147483648)
		{
			*tmp_str++ = '2';
			n = 147483648;
		}
		else
			n = -n;
	}
	tmp_str = ft_recursive_cleate_str(tmp_str, n);
	*tmp_str = '\0';
	return (str);
}
