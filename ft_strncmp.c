/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:43:30 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/30 12:47:57 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_;
	unsigned char	*s2_;

	i = 0;
	s1_ = (unsigned char *)s1;
	s2_ = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n -1 && s1_[i] != '\0' && s2_[i] != '\0' && s1_[i] == s2_[i])
		i++;
	return (s1_[i] - s2_[i]);
}
