/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyagmur <yyagmur@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 10:59:44 by yyagmur           #+#    #+#             */
/*   Updated: 2022/12/30 12:39:10 by yyagmur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int x)
{
	int	count;

	count = 1;
	while (x > 9 || x < -9)
	{
		x = x / 10;
		count++;
	}
	if (x < 0)
		count++;
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		len;
	long	nb;

	nb = n;
	len = ft_count(nb);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ret[len] = '\0';
	if (nb == 0)
		ret[0] = '0';
	if (nb < 0)
	{
		ret[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		ret[--len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (ret);
}
