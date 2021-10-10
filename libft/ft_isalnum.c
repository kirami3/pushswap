/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsenal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:46:43 by harsenal          #+#    #+#             */
/*   Updated: 2021/10/06 15:46:45 by harsenal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ch)
{
	return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a'
			&& ch <= 'z') || (ch >= '0' && ch <= '9'));
}