/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:11:57 by nfukuma           #+#    #+#             */
/*   Updated: 2022/07/10 14:08:39 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	l_n;

	l_n = n;
	if (l_n < 0)
	{
		ft_putchar_fd('-', fd);
		l_n *= -1;
	}
	if (l_n < 10)
		ft_putchar_fd(l_n + '0', fd);
	else
	{
		ft_putnbr_fd(l_n / 10, fd);
		ft_putnbr_fd(l_n % 10, fd);
	}
}
