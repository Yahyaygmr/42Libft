/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 21:18:54 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/19 12:42:42 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_;
	const char	*src_;

	dst_ = dst;
	src_ = src;
	if (dst == 0 && src == 0)
		return (0);
	if (src < dst)
	{
		while (len > 0)
		{
			len--;
			*(dst_ + len) = *(src_ + len);
		}
		return (dst);
	}
	while (len > 0)
	{
		*dst_ = *src_;
		dst_++;
		src_++;
		len--;
	}
	return (dst);
}
