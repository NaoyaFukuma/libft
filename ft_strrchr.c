/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:41:21 by nfukuma           #+#    #+#             */
/*   Updated: 2022/07/04 14:55:07 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char		*tmp_ptr;
	unsigned char	uc;

	tmp_ptr = NULL;
	uc = c;
	while (1)
	{
		if (*str == uc)
			tmp_ptr = str;
		if (*str == '\0')
			break ;
		str++;
	}
	return ((char *)tmp_ptr);
}
