/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:55:41 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/30 12:43:48 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_cword(const char *s, char c)
{
	size_t	cword;

	cword = 0;
	while (*s)
	{
		if (*s != c)
		{
			++cword;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (cword);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	ret = malloc(sizeof(char *) * (ft_cword(s, c) + 1));
	if (!ret)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			ret[i++] = ft_substr((s - len), 0, len);
		}
		else
			++s;
	}
	ret[i] = 0;
	return (ret);
}
