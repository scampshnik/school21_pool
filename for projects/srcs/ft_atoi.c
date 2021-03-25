/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 11:29:43 by jshantay          #+#    #+#             */
/*   Updated: 2021/01/26 13:33:25 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	minus;

	i = 0;
	num = 0;
	minus = 1;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus = minus * (-1);
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		num = (num * 10) + str[i] - '0';
		i++;
	}
	if (minus == -1)
		return (-num);
	else
		return (num);
}
