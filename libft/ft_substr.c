/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harsenal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:51:02 by harsenal          #+#    #+#             */
/*   Updated: 2021/10/06 15:51:04 by harsenal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_func(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	int		i;

	i = start;
	j = 0;
	while (s[i])
	{
		i++;
		j++;
	}
	if (j < len)
		return (j);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	int		i;

	if (s)
		len = ft_func(s, start, len);
	i = 0;
	p = (char *)malloc(len + 1);
	if (!p || !s)
		return (NULL);
	while (len && start < ft_strlen(s))
	{
		p[i] = s[start];
		start++;
		len--;
		i++;
	}
	p[i] = '\0';
	return (p);
}
