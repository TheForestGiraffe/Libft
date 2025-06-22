/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_test_result.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 22:02:58 by pecavalc          #+#    #+#             */
/*   Updated: 2025/05/20 17:16:36 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_test_result(int ft_return, char *ft_name)
{
	if (ft_return == 1)
		printf("%-30s [Passed]\n", ft_name);
	else if (ft_return == 0)
		printf("%-30s [Failed]\n", ft_name);
	else if (ft_return == -1)
		printf("%-30s [------]\n", ft_name);
	else
		printf("%s:	The test function must return either 0 or 1. The test failed.\n", ft_name);
}
