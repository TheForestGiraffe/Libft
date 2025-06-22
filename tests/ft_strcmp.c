/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:18:04 by pecavalc          #+#    #+#             */
/*   Updated: 2025/04/13 21:58:02 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("Hello, Hello: %i\n", ft_strcmp("Hello", "Hello"));
	printf("Hell, Hello: %i\n", ft_strcmp("Hell", "Hello"));
	printf("Hello, Hell: %i\n", ft_strcmp("Hello", "Hell"));
	printf("Empty, Empty: %i\n", ft_strcmp("",""));
	printf("42, Fourty Two: %i\n", ft_strcmp("42", "Fourty Two"));
	return (0);
}
*/
