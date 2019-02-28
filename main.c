/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlantonn <mlantonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 22:00:00 by mlantonn          #+#    #+#             */
/*   Updated: 2019/03/01 00:03:25 by mlantonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printf(const char *format, ...);

#include <stdio.h>

int main(void)
{
	char *fmt = "Je vais afficher trois lettres : %c, %c, %c\n\
Et voilà une phrase : %s, et une autre : %s\n";
	char *str = "une phrase", *str2 = "hello world";
	int	ret, ret2;

	ret = ft_printf(fmt, 'A', 'B', 'C', str, str2);
	ret2 = printf(fmt, 'A', 'B', 'C', str, str2);
	printf("%d / %d\n", ret, ret2);
	return (0);
}
