/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlantonn <mlantonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 22:00:00 by mlantonn          #+#    #+#             */
/*   Updated: 2019/02/24 14:30:31 by mlantonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_fmt(t_param *param)
{
	int	i;

	i = 0;
	while(param->fmt[i])
	{
		if (param->fmt[i] != '%')
		{
			param->buff[param->buff_len++] = param->fmt[i++];
			if (param->buff_len == BUFF_SIZE)
				print_buff(param);
		}
		else
		{
			parse_param(param, &i);
		}
	}
	if (param->buff_len)
		print_buff(param);
}

int		ft_printf(const char *fmt, ...)
{
	t_param		param;

	param.fmt = (char *)fmt;
	param.buff_len = 0;
	va_start(param.ap, fmt);
	parse_fmt(&param);
	va_end(param.ap);
	return (0);
}