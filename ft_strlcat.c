/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbanlues <vbanlues@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:17:29 by vbanlues          #+#    #+#             */
/*   Updated: 2024/02/20 18:43:42 by vbanlues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		src_i;
	size_t		value;

	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dest))
		value = ft_strlen(src) + size;
	else
		value = ft_strlen(src) + ft_strlen(dest);
	i = 0;
	while (dest[i] != '\0')
		i++;
	src_i = 0;
	while (src[src_i] != '\0' && i + 1 < size)
	{
		dest[i] = src[src_i];
		src_i++;
		i++;
	}
	dest[i] = '\0';
	return (value);
}
