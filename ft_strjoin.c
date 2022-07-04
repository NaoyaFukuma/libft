/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 23:24:10 by nfukuma           #+#    #+#             */
/*   Updated: 2022/06/17 11:23:15 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*nstr;
	char	*tmp_nstr;

	nstr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (nstr == NULL)
		return (NULL);
	tmp_nstr = nstr;
	while (*s1)
		*tmp_nstr++ = *s1++;
	while (*s2)
		*tmp_nstr++ = *s2++;
	*tmp_nstr = '\0';
	return (nstr);
}
