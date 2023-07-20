/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galseiar <galseiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:42:17 by galseiar          #+#    #+#             */
/*   Updated: 2022/08/23 13:17:11 by galseiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (n-- > 0)
	{
		str[i] = 0;
		i++;
	}
}

/*int main(void)
{
	char str[7] = "ghayaya";
	int	i;

	i = 0;
	ft_bzero(str, 7);
	while(i <= 7)
	{
		printf("%d", str[i]);
		i++;
	}
}*/
