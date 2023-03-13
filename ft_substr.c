/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 09:18:08 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/30 12:46:47 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	char			*s_;
	unsigned int	j;
	size_t			s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		p = malloc(sizeof(char) * (s_len - start + 1));
	else
		p = malloc(sizeof(char) * (len + 1));
	s_ = (char *)s;
	if (!p)
		return (0);
	j = 0;
	while (s_[start] && j < len)
		p[j++] = s_[start++];
	p[j] = '\0';
	return (p);
}
