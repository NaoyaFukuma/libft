/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 21:09:46 by nfukuma           #+#    #+#             */
/*   Updated: 2022/07/04 13:29:04 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT_H

	# define LIBFT_H
	# include <stdlib.h>
	# include <unistd.h>

	int		ft_isalpha(int c);
	int		ft_isdigit(int c);
	int		ft_isascii(int c);
	int		ft_isprint(int c);
	size_t	ft_strlen(const char *str);
	void	*ft_memset(void *buf, int c, size_t size);
	void	ft_bzero(void *s, size_t n);
	void	*ft_memmove(void *dst, const void *src, size_t size);
	size_t	ft_strlcpy(char *dst, const char *src, size_t size);
	size_t	ft_strlcat(char *dst, const char *src, size_t size);
	int		ft_toupper(int c);
	int		ft_tolower(int c);
	char	*ft_strchr(const char *str, int c);
	char	*ft_strrchr(const char *str, int c);
	int		ft_strncmp(const char *s1, const char *s2, size_t size);
	void	*ft_memchr(const void *buf, int c, size_t n);
	int		ft_memcmp(const void *s1, const void *s2, size_t size);
	char	*ft_strnstr(const char *str, const char *target, size_t size);
	int		ft_atoi(const char *str);
	void	*ft_calloc(size_t num, size_t size);
	char	*ft_strdup(const char *str);
	char	*ft_substr(const char *str, unsigned int start, size_t len);


	char	*ft_strnew(size_t size);

#endif
