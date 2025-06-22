/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 20:03:55 by pecavalc          #+#    #+#             */
/*   Updated: 2025/05/18 20:22:34 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int	test_ft_strnstr(void)
{
	/*
	printf("%s\n", ft_strnstr("Hello World!", "llOllo", 13));
	printf("%s\n", ft_strnstr("Hello World!", "World", 13));
	printf("%s\n", ft_strnstr("Hello World!", "World", 5));
	printf("%s\n", ft_strnstr("Hello World!", "", 13));
	printf("%s\n", ft_strnstr("Hello World! ello", "ello", 18));
	printf("%s\n", ft_strnstr("Helllo World! ello", "ello", 18));
	*/
	if (ft_strnstr("Hello World!", "llOllo", 13) != NULL)
		return (0);
	if (strncmp(ft_strnstr("Hello World!", "World", 13), "World!", 13))
		return (0);
	if (ft_strnstr("Hello World!", "World", 5) != NULL)
		return (0);
	if (strncmp(ft_strnstr("Hello World!", "", 13), "Hello World!", 13))
		return (0);
	if (strncmp(ft_strnstr("Hello World! ello", "ello", 18), "ello World! ello", 18))
		return (0);
	if (strncmp(ft_strnstr("Helllo World! ello", "ello", 18), "ello", 18))
		return (0);
	return (1);
}
