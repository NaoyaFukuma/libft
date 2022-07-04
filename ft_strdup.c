/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 23:33:53 by nfukuma           #+#    #+#             */
/*   Updated: 2022/07/04 15:46:18 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dst;
	size_t	strlen;

	if (!str)
		return (NULL);
	strlen = ft_strlen(str);
	dst = ft_strnew(strlen);
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, str, strlen + 1);
	return (dst);
}
