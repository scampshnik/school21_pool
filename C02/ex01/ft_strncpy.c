/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshantay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 11:23:15 by jshantay          #+#    #+#             */
/*   Updated: 2021/01/23 16:16:25 by jshantay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int s;

	s = 0;
	while (src[s] != '\0' && s < n)
	{
		dest[s] = src[s];
		s++;
	}
	if (s < n && src[s] == '\0')
	{
		while (dest[s] != '\0')
		{
			dest[s] = '\0';
			s++;
		}
	}
	return (dest);
}
