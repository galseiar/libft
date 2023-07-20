/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galseiar <galseiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:18:24 by galseiar          #+#    #+#             */
/*   Updated: 2022/08/23 17:25:23 by galseiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d1;
	unsigned char	*s1;

	d1 = (unsigned char *)dst;
	s1 = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	if (d1 > s1)
	{
		while (len--)
			d1[len] = s1[len];
	}
	else
		ft_memcpy(d1, s1, len);
	return (d1);
}

/*int main(void)
{
    char dest[] = "oldmcdondddd";
    const char src[] = "newmcdonald";

    printf("%s\n%s", dest, src);
    ft_memmove(dest, src, 6);
    printf("\n%s\n%s", dest, src);
}*/
