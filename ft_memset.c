/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbanlues <vbanlues@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:42:30 by vbanlues          #+#    #+#             */
/*   Updated: 2024/02/20 18:39:03 by vbanlues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)str + i) = c;
		i++;
	}
	return (str);
}
