/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:04:55 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/30 12:42:00 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst_;
	const char	*src_;

	if (dst == 0 && src == 0)
		return (0);
	src_ = src;
	dst_ = dst;
	i = 0;
	while (i < n)
	{
		dst_[i] = src_[i];
		i++;
	}
	return (dst);
}
