/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarraq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 20:14:10 by mlarraq           #+#    #+#             */
/*   Updated: 2019/04/20 23:57:54 by mlarraq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*a;

	a = (t_list *)malloc(sizeof(t_list));
	if (!a)
		return (NULL);
	if (!content)
	{
		a->content = NULL;
		a->content_size = 0;
	}
	else
	{
		if (!(a->content = malloc(sizeof(*(a->content)) * content_size)))
			return (NULL);
		a->content = ft_memcpy(a->content, content, content_size);
		a->content_size = content_size;
	}
	a->next = NULL;
	return (a);
}
