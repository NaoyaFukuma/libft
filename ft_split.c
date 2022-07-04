/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:45:13 by nfukuma           #+#    #+#             */
/*   Updated: 2022/07/04 13:49:40 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_sep_str_alloc(char **sep_str, const char *str, char c)
{
	char	**sep_str_tmp;
	int		len;
	int		i;

	i = 0;
	sep_str_tmp = sep_str;
	while (*str)
	{
		len = 0;
		while (*str != c && *str)
		{
			len++;
			str++;
		}
		if (*str)
			str++;
		if (len)
		{
			sep_str_tmp[i] = malloc(sizeof(char) * (len + 1));
			i++;
		}
	}
	return (sep_str);
}

static int	ft_str_num(const char *str, char c)
{
	int	num;

	num = 1;
	while (*str)
	{
		if (*str == c)
		{
			while (*str == c && *str)
				str++;
			if (*str != '\0')
				num++;
		}
		else
			str++;
	}
	return (num + 1);
}

static char	**ft_sepalloc(const char *str, char c)
{
	char	**sep_str;

	sep_str = malloc(sizeof(char *) * ft_str_num(str, c));
	if (sep_str == NULL)
		return (NULL);
	sep_str = ft_sep_str_alloc(sep_str, str, c);
	return (sep_str);
}

static int	ft_preprocessing(char **sep_str, const char *str, char c)
{
	if (str == NULL)
		return (1);
	while (*str == c && *str)
		str++;
	if (*str == '\0')
	{
		sep_str = malloc(sizeof(char *));
		if (sep_str == NULL)
			return (1);
		*sep_str = NULL;
	}
	return (0);
}

char	**ft_split(const char *str, char c)
{
	char	**sep_str;
	int		i;
	int		j;

	if (ft_preprocessing(sep_str, str, c))
		return (NULL);
	else if (*sep_str == NULL)
		return (sep_str);
	sep_str = ft_sepalloc(str, c);
	if (!sep_str)
		return (NULL);
	i = 0;
	while (*str)
	{
		j = 0;
		while (*str != c && *str)
			sep_str[i][j++] = *str++;
		sep_str[i++][j] = '\0';
		while (*str == c && *str)
			str++;
	}
	sep_str[i] = NULL;
	return (sep_str);
}
