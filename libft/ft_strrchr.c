/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:43:09 by dchiche           #+#    #+#             */
/*   Updated: 2017/11/13 11:49:06 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	if (c == '\0')
		return ((char *)&(s[i]));
	i--;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&(s[i]));
		i--;
	}
	return (NULL);
}
