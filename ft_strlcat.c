/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galseiar <galseiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:19:09 by galseiar          #+#    #+#             */
/*   Updated: 2022/08/23 13:53:51 by galseiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	d;

	d = ft_strlen(dst);
	while (dstsize <= d)
		return (dstsize + ft_strlen(src));
	i = 0;
	while (src[i] && d + 1 < dstsize)
	{
		dst[d] = src[i];
		i++;
		d++;
	}
	dst[d] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}

/*int main(void)
{
	char src[] = "abdulla";
	char dst[] = "ghaya";
	printf("%zu\n", ft_strlcat(src, dst, 2));
	printf("%zu\n", strlcat(src, dst, 2));
}*/
