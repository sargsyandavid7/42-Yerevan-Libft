/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:41:20 by dasargsy          #+#    #+#             */
/*   Updated: 2024/01/21 20:52:44 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		a = (char *)malloc(1 * sizeof(char));
		a[0] = '\0';
		return (a);
	}
	a = (char *)malloc(len + 1 * sizeof(char));
	if (!a)
		return (NULL);
	while (i < len)
	{
		a[i] = s[i + start];
		i++;
	}
	a[i] = '\0';
	return (a);
}
