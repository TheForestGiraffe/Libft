/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 23:39:46 by pecavalc          #+#    #+#             */
/*   Updated: 2025/05/20 17:58:54 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNIT_TESTS_H
# define UNIT_TESTS_H

void	print_test_result(int ft_return, char *ft_name);
int		test_ft_isalpha(void);
int		test_ft_isdigit(void);
int		test_ft_isalnum(void);
int		test_ft_isascii(void);
int		test_ft_isprint(void);
int		test_ft_strlen(void);
int		test_ft_memset(void);
int		test_ft_bzero(void);
int		test_ft_memcpy(void);
int		test_ft_calloc(void);
int		test_ft_calloc_overflow(void);
int		test_ft_memmove_backwardcpy(void);
int		test_ft_memmove_forwardcpy(void);
int     test_ft_strlcpy(void);
int     test_ft_strlcat(void);
char	*ft_strcpy(char *dest, char *src);
int     ft_strcmp(char *s1, char *s2);
int     test_ft_toupper(void);
int		test_ft_tolower(void);
int		test_ft_strchr(void);
int		test_ft_strrchr(void);
int		test_ft_strncmp(void);
int		test_ft_memchr(void);
int		test_ft_memcmp(void);
int		test_ft_strnstr(void);
int		test_ft_atoi(void);
int		test_ft_strdup(void);
int		test_ft_substr(void);
int		test_ft_strjoin(void);
int		test_ft_strtrim(void);
int		test_ft_split(void);
int		test_ft_itoa(void);
int		test_ft_strmapi(void);
int		test_ft_striteri(void);
int		test_ft_putchar_fd(void);
int		test_ft_putstr_fd(void);
int		test_ft_putendl_fd(void);
int		test_ft_putnbr_fd(void);

#endif