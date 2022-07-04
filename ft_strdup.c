/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 23:33:53 by nfukuma           #+#    #+#             */
/*   Updated: 2022/06/17 11:42:10 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dst;

	if (!str)
		return (NULL);
	dst = ft_strnew(ft_strlen(str));
	if (dst == NULL)
		return (NULL);
	return (ft_strcpy(dst, str));
}
