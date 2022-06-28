/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 21:09:46 by nfukuma           #+#    #+#             */
/*   Updated: 2022/06/28 11:22:03 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT_H
	# define LIBFT_H
	# include <stdlib.h>
	# include <unistd.h>

	int	ft_isalpha(int c);
	int	ft_isdigit(int c);
	int	ft_isascii(int c);
	int	ft_isprint(int c);
	size_t	ft_strlen(const char *str);
	void	*ft_memset(void *buf, int c, size_t size);

#endif
