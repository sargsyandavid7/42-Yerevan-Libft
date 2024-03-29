/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:12:45 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/20 18:16:04 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void	*ptr1, const void	*ptr2, size_t num)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	i = 0;
	p1 = (unsigned char *)(ptr1);
	p2 = (unsigned char *)(ptr2);
	while (i < num && (unsigned char)p1[i] == (unsigned char)p2[i])
	{
		i++;
	}
	if (i == num)
		return (0);
	return (p1[i] - p2[i]);
}
