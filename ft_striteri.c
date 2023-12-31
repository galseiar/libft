/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galseiar <galseiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:19:00 by galseiar          #+#    #+#             */
/*   Updated: 2022/08/23 16:28:42 by galseiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

//void	f(unsigned int i, char *s2)
//{
//	s2[i] += 1;
//}

/*int	main(void)
{
	char    s2[] = "GHAYA";
	unsigned int i;
	i = 0;
	ft_striteri (s2, f);
printf("%s\n", s2);
return (0);
}*/
