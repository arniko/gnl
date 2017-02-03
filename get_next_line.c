/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 16:17:29 by astepovy          #+#    #+#             */
/*   Updated: 2017/02/03 16:30:10 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*join_str(char *s1, char *s2)
{
	char	*tmp;
	int		i;
	int		j;

	i = -1;
	j = -1;
	tmp = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1[++i])
		tmp[i] = s1[i];
	free(s1);
	while (s2[++j])
		tmp[i + j] = s2[j];
	tmp[i + j] = '\0';
	return (tmp);
}

int		findchr(char *s, char c)
{
	int i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (i);
	if (s[i + 1] == '\0')
		return (-2);
	return (-1);
}

char	*ft_strndup(const char *s, size_t n)
{
	char	*result;
	size_t	len;

	len = ft_strlen(s);
	if (n < len)
		len = n;
	result = (char*)malloc(len + 1);
	if (!result)
		return (0);
	result[len] = '\0';
	return (char*)ft_memcpy(result, s, len);
}

int		get_next_line(const int fd, char **line)
{
	static char	*buf[OPEN_MAX];
	char		*tmp;
	int			pos;
	int			res;

	pos = -1;
	if (BUFF_SIZE > 0)
		tmp = malloc(sizeof(char) * (BUFF_SIZE + 1));
	while ((res = read(fd, tmp, BUFF_SIZE)) > 0 && fd >= 0 && fd <= OPEN_MAX)
	{
		tmp[res] = '\0';
		buf[fd] = (buf[fd] == NULL ? ft_strdup(tmp) : join_str(buf[fd], tmp));
		bzero(tmp, BUFF_SIZE);
	}
	free(tmp);
	if (res == -1 || fd < 0)
		return (-1);
	if (buf[fd] == NULL || buf[fd][0] == '\0')
		return (0);
	if (((tmp = ft_strdup(buf[fd])) && (pos = findchr(buf[fd], '\n')) != -1))
	{
		*line = ft_strndup(tmp, pos);
		free(buf[fd]);
		buf[fd] = (pos == -2) ? '\0' : ft_strdup(&tmp[pos + 1]);
		free(tmp);
		return (1);
	}
	return ((*line = ft_strndup(buf[fd], pos)) && ft_strlen(*line) != 0);
}
