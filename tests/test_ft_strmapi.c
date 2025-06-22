/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:26:19 by pecavalc          #+#    #+#             */
/*   Updated: 2025/05/20 16:10:26 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	f_toupper(unsigned int i, char c)
{
	return (c + i);
}

int	test_ft_strmapi(void)
{
	int		test_result;
	char	str_1[] = "abcd";
	char	str_2[] = "";
	char	*res_1;
	char	*res_2;

	test_result = 1;
	res_1 = ft_strmapi(str_1, &f_toupper);
	res_2 = ft_strmapi(str_2, &f_toupper);
	//printf("f = c + i. Before: %s  After: %s\n", str_1, res_1);
	//printf("f = c + i. Before: %s  After: %s\n", str_2, res_2);
	if (strcmp(res_1, "aceg") != 0)
		test_result = 0;
	if (strcmp(res_2, "") != 0)
		test_result = 0;
	free(res_1);
	free(res_2);
	return (test_result);
}
