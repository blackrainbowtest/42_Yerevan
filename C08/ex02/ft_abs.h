/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:05:15 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/25 22:07:16 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

static inline int	abs_value(int value)
{
	if (value < 0)
		return (-value);
	else
		return (value);
}

# define ABS(value) (abs_value(value))

#endif
