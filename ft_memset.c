/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarraq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 21:48:28 by mlarraq           #+#    #+#             */
/*   Updated: 2019/04/17 09:13:33 by mlarraq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	char	*dest;

	if (n == 0)
		return (destination);
	dest = (char *)destination;
	while (n--)
		*dest++ = (unsigned char)c;
	return (destination);
}
