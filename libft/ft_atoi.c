/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 16:38:50 by dkaplan           #+#    #+#             */
/*   Updated: 2018/07/23 13:44:48 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long		ft_atoi(const char *str)
{
	long num;
	int i;
	int neg;

	neg = 1;
	num = 0;
	i = 0;
	while ((str[i] == '\t') || (str[i] == '\v')
			|| (str[i] == '\f') || (str[i] == '\n')
			|| (str[i] == ' ') || (str[i] == '\r'))
		i++;
	if (str[i] == 0)
		return (0);
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - 48;
		i++;
	}
	num *= neg;
	return (num);
}
