/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarraq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 03:54:23 by mlarraq           #+#    #+#             */
/*   Updated: 2019/04/12 04:08:01 by mlarraq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*s;
	size_t	i;

	i = ft_strlen((char*)str);
	s = (char*)str + ft_strlen((char*)str);
	while (*s != ch)
	{
		if (s == str)
			return (NULL);
		s--;
	}
	return (s);
}
