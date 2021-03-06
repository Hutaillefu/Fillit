/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpisano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:20:53 by bpisano           #+#    #+#             */
/*   Updated: 2017/11/13 10:22:54 by bpisano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_is_printable(char const *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (!(s[i] >= 32 && s[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
