/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbanlues <vbanlues@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:46:11 by vbanlues          #+#    #+#             */
/*   Updated: 2024/02/20 20:41:02 by vbanlues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	n;

	if (*to_find == '\0')
		return ((char *)str);
	n = ft_strlen((char *)to_find);
	while (*str != '\0' && len-- >= n)
	{
		if (*str == *to_find && ft_memcmp(str, to_find, n) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
