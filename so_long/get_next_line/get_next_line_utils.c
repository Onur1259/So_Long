/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozturk <onur_fb_5959@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:29:21 by oozturk           #+#    #+#             */
/*   Updated: 2022/09/08 17:29:22 by oozturk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	a;
	char	*dizi;

	i = -1;
	a = 0;
	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}
	if (!s2)
		return (NULL);
	dizi = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!dizi)
		return (NULL);
	while (s1[++i] != '\0')
		dizi[i] = s1[i];
	while (s2[a] != '\0')
		dizi[i++] = s2[a++];
	dizi[i] = '\0';
	free (s1);
	return (dizi);
}

size_t	ft_strlen(const char *s)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
