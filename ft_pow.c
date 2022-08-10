/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 00:58:09 by nfukuma           #+#    #+#             */
/*   Updated: 2022/08/11 01:02:55 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pow(int num, int pow)
{
	int	res;

	res = num;
	if (pow == 0)
		return (1);
	if (pow == 1)
		return (num);
	while (--pow)
		res = res * num;
	return (res);
}
