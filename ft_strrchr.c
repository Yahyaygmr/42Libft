/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:18:20 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/28 14:00:31 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*first_adr;

	first_adr = s;
	c = (unsigned char)c;
	i = ft_strlen(s);
	s = (s + i);
	while (s != first_adr && c != *s)
		s--;
	if (c == *s)
		return ((char *) s);
	return (0);
}
