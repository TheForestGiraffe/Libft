/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:16:36 by pecavalc          #+#    #+#             */
/*   Updated: 2025/05/20 18:01:27 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "unit_tests.h"

int	main()
{
	printf("\n");
	printf("Unit tests:\n");
    print_test_result(test_ft_isalpha(), "test_ft_isalpha");
	print_test_result(test_ft_isdigit(), "test_ft_isdigit");
	print_test_result(test_ft_isalnum(), "test_ft_isalnum");
	print_test_result(test_ft_isascii(), "test_ft_isascii");
	print_test_result(test_ft_isprint(), "test_ft_isprint");
	print_test_result(test_ft_strlen(), "test_ft_strlen");
	print_test_result(test_ft_memset(), "test_ft_memset");
	print_test_result(test_ft_bzero(), "test_ft_bzero");
	print_test_result(test_ft_memcpy(), "test_ft_memcpy");
	print_test_result(test_ft_memmove_backwardcpy(), "test_ft_memmove_backwardcpy");
	print_test_result(test_ft_memmove_forwardcpy(), "test_ft_memmove_forwardcpy");
	print_test_result(test_ft_calloc(), "test_ft_calloc");
	print_test_result(test_ft_calloc_overflow(), "test_ft_calloc_overflow");
	print_test_result(test_ft_strlcpy(), "test_ft_strlcpy");
	print_test_result(test_ft_strlcat(), "test_ft_strlcat");
	print_test_result(test_ft_toupper(), "test_ft_toupper");
	print_test_result(test_ft_tolower(), "test_ft_tolower");
	print_test_result(test_ft_strchr(), "test_ft_strchr");
	print_test_result(test_ft_strrchr(), "test_ft_strrchr");
	print_test_result(test_ft_strncmp(), "test_ft_strncmp");
	print_test_result(test_ft_memchr(), "test_ft_memchr");
	print_test_result(test_ft_memcmp(), "test_ft_memcmp");
	print_test_result(test_ft_strnstr(), "test_ft_strnstr");
	print_test_result(test_ft_atoi(), "test_ft_atoi");
	print_test_result(test_ft_strdup(), "test_ft_strdup");
	print_test_result(test_ft_substr(), "test_ft_substr");
	print_test_result(test_ft_strjoin(), "test_ft_strjoin");
	print_test_result(test_ft_strtrim(), "test_ft_strtrim");
	print_test_result(test_ft_split(), "test_ft_split");
	print_test_result(test_ft_itoa(), "test_ft_itoa");
	print_test_result(test_ft_strmapi(), "test_ft_strmapi");
	print_test_result(test_ft_striteri(), "test_ft_striteri");
	print_test_result(test_ft_putchar_fd(), "test_ft_putchar_fd");
	print_test_result(test_ft_putstr_fd(), "test_ft_putstr_fd");
	print_test_result(test_ft_putendl_fd(), "test_ft_putendl_fd");
	print_test_result(test_ft_putnbr_fd(), "test_ft_putnbr_fd");

	printf("End of unit tests.\n");
    return (0);
}
