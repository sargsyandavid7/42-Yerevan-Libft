/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:35:10 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/19 17:28:31 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void			*a;
	unsigned char	*b;
	size_t			i;

	i = 0;
	a = malloc(num * size);
	b = (unsigned char *)(a);
	while (i < num * size)
	{
		b[i] = 0;
		i++;
	}
	return (a);
}
