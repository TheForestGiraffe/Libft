/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:18:38 by pecavalc          #+#    #+#             */
/*   Updated: 2025/05/20 18:38:31 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		test_ft_atoi(void);
int		test_ft_itoa(void);
int		test_ft_putnbr_fd(void);
int		test_ft_split(void);
int		test_ft_strnstr(void);
int		test_ft_toupper(void);
void	print_test_result(int ft_return, char *ft_name);

int	main(void)
{
	print_test_result(test_ft_atoi(), "test_ft_atoi");
	print_test_result(test_ft_itoa(), "test_ft_itoa");
	print_test_result(test_ft_putnbr_fd(), "test_ft_putnbr_fd");
	print_test_result(test_ft_split(), "test_ft_split");
	print_test_result(test_ft_strnstr(), "test_ft_strnstr");
	print_test_result(test_ft_toupper(), "test_ft_toupper");
	return (0);
}
