/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlantonn <mlantonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 17:44:10 by mlantonn          #+#    #+#             */
/*   Updated: 2019/03/08 00:06:55 by mlantonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

# include "structs.h"

long long	ft_atoi(char const *str);
void		ft_itoa(long long nb, char (*buff)[21]);
void		ft_utoa_base(unsigned long long nb, int base, int maj,
															char (*buff)[23]);

void		c(t_param *param);
void		s(t_param *param);
void		p(t_param *param);
void		i(t_param *param);
void		o(t_param *param);
void		u(t_param *param);
void		x(t_param *param);
void		f(t_param *param);

#endif
