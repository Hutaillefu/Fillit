/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpisano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:51:56 by bpisano           #+#    #+#             */
/*   Updated: 2017/11/15 12:48:52 by bpisano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int n, int base)
{
	char	*nbr;
	char	*s_base;

	if (!(nbr = (char *)ft_memalloc(sizeof(char))))
		return (NULL);
	s_base = "0123456789ABCDEF";
	if (n == -2147483648)
		nbr = ft_strjoin("-", ft_strjoin(ft_itoa_base(-(n / base), base),
										ft_itoa_base(8, base)));
	else if (n < 0)
		nbr = ft_strjoin("-", ft_itoa_base(-n, base));
	else
		nbr = n < base ? ft_strdup(ft_strsub(s_base, n % base, 1)) :
						ft_strjoin(ft_itoa_base(n / base, base),
						ft_strsub(s_base, n % base, 1));
	return (nbr);
}
