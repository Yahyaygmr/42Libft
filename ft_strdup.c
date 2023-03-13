/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 09:06:12 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/28 13:58:50 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*p;

	len = ft_strlen(s1) + 1;
	p = malloc(len * sizeof(char));
	if (!p)
		return (0);
	ft_memcpy(p, s1, len);
	return (p);
}
