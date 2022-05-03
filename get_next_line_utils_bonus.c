/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:17:53 by silim             #+#    #+#             */
/*   Updated: 2021/01/05 16:20:26 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int				ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char			*ft_strdup(char *str)
{
	char		*dst;
	int			i;

	if ((dst = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))) == NULL)
		return (0);
	i = 0;
	while (*str)
		dst[i++] = *str++;
	dst[i] = '\0';
	return (dst);
}

char			*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*sub_s;
	size_t		s_len;

	if (!s)
		return (0);
	i = 0;
	s_len = ft_strlen(s);
	if (!(sub_s = malloc(sizeof(char) * (s_len + 1))))
		return (0);
	while (i < len && start + i < s_len)
	{
		sub_s[i] = s[start + i];
		++i;
	}
	sub_s[i] = '\0';
	return (sub_s);
}

char			*ft_strjoin(char *s1, char *s2)
{
	int			i;
	char		*dst;

	if (!(dst = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (0);
	i = 0;
	while (*s1)
		dst[i++] = *s1++;
	while (*s2)
		dst[i++] = *s2++;
	dst[i] = '\0';
	return (dst);
}

char			*is_newline(char *str)
{
	int			i;
	int			str_len;

	if (!str)
		return (0);
	i = 0;
	str_len = ft_strlen(str);
	while (i < str_len + 1)
	{
		if (str[i] == '\n')
			return (str + i);
		++i;
	}
	return (0);
}
