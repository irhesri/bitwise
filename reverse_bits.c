/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhesri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:32:16 by irhesri           #+#    #+#             */
/*   Updated: 2022/05/22 18:32:25 by irhesri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "bitwise.h"

unsigned char	reverse_bits(unsigned char c)
{
	unsigned char	u;
	int				i;

	u = 0;
	i = 8;
	while (i--)
	{
		u <<= 1;
		u |= (c & 1);
		c >>= 1;
	}
	return (u);
}
