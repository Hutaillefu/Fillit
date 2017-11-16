/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpisano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:22:28 by bpisano           #+#    #+#             */
/*   Updated: 2017/11/09 15:30:00 by bpisano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	return ((char)c == ' ' ||
			(char)c == '\t' ||
			(char)c == '\n' ||
			(char)c == '\v' ||
			(char)c == '\f' ||
			(char)c == '\r' ? 1 : 0);
}