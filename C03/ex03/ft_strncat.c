/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 08:30:22 by jshantay          #+#    #+#             */
/*   Updated: 2021/01/24 10:23:15 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	s;
	unsigned int	r;

	s = 0;
	r = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	while (r < nb && src[r] != '\0')
	{
		dest[s] = src[r];
		s++;
		r++;
	}
	dest[s] = '\0';
	return (dest);
}
