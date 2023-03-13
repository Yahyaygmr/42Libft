/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 09:47:34 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/28 13:59:55 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*p;

	if (!s1 && !s2)
		return (0);
	if (s1 && !s2)
		return ((char *)s1);
	if (!s1 && s2)
		return ((char *)s2);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	p = malloc(len * sizeof(char));
	if (!p)
		return (0);
	ft_strlcpy(p, s1, ft_strlen(s1)+1);
	ft_strlcat(p, s2, len);
	return (p);
}
