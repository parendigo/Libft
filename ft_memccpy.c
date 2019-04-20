/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarraq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 23:21:37 by mlarraq           #+#    #+#             */
/*   Updated: 2019/04/17 15:58:45 by mlarraq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *source, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	*dest;
	unsigned char	*str;

	i = 0;
	src = (unsigned char*)source;
	dest = (unsigned char*)d;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		if (src[i] == (unsigned char)c)
		{
			str = &dest[++i];
			return (str);
		}
		i++;
	}
	return (NULL);
}
