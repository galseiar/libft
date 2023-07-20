/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galseiar <galseiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:51:37 by galseiar          #+#    #+#             */
/*   Updated: 2022/08/23 13:17:49 by galseiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(int num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		i++;
		num = num / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	char			*s;
	size_t			len;

	len = counter(n);
	num = n;
	if (n < 0)
	{
		num = -1 * n;
		len++;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	s[len] = '\0';
	if (num == 0)
		s[--len] = 0 + '0';
	while (num)
	{
		s[--len] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}

/*int main(void)
{
    int			n;
    n = -1025438778;
    char		*s;
    s = ft_itoa(n);
    printf ("%s\n", s);
}*/
