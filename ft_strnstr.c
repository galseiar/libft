/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galseiar <galseiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:19:53 by galseiar          #+#    #+#             */
/*   Updated: 2022/08/23 14:06:56 by galseiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;
	char	*h;

	i = 0;
	n_len = ft_strlen(needle);
	h = (char *)haystack;
	if (n_len == 0 || haystack == needle)
		return (h);
	while (h[i] != '\0' && i < len)
	{
		j = 0;
		while (h[i + j] != '\0' && needle[j] != '\0' && h[i + j] == needle[j]
			&& i + j < len)
		{
			j++;
		}
		if (j == n_len)
		{
			return (&h[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*result;
	char	haystack[] = "HELLO WORLD!!";
	char	needle[] = "LO";

	result = ft_strnstr(haystack, needle, 14);


	printf("%s\n", result);

}*/
