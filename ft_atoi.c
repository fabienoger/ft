/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foger <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/21 13:41:42 by foger             #+#    #+#             */
/*   Updated: 2015/08/23 10:57:17 by foger            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *str)
{
	int	nb;
	int	neg;

	nb = 0;
	while (*str == ' ' || *str == '\n' || *str == '\v' || *str == '\t'
			|| *str == '\r' || *str == '\f')
		str++;
	neg = (*str == '-' ? 1 : 0);
	if (*str == '+' || *str == '-')
		str++;
	while (*str == '0')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb * 10) + *str - '0';
		str++;
	}
	nb = (neg ? -nb : nb);
	return (nb);
}

int		main(void)
{
	printf("%d\n", ft_atoi("1234567890"));
	return (0);
}
