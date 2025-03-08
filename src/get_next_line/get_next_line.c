/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:02:33 by cgrasser          #+#    #+#             */
/*   Updated: 2025/03/08 12:21:28 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*join_and_free(char *buffer, char *tmp_buffer)
{
	char	*new_buffer;

	new_buffer = ft_strjoin(buffer, tmp_buffer);
	free(buffer);
	return (new_buffer);
}

static char	*extract_remaining_text(char *buffer)
{
	char	*remaining;
	int		i;
	int		j;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	remaining = ft_calloc(ft_strlen(buffer) - i + 1, sizeof(char));
	i++;
	j = 0;
	while (buffer[i])
		remaining[j++] = buffer[i++];
	free(buffer);
	return (remaining);
}

static char	*extract_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
		line[i] = '\n';
	return (line);
}

static char	*read_from_file(int fd, char *buffer)
{
	char	*tmp_buffer;
	int		bytes_read;

	if (!buffer)
		buffer = ft_calloc(1, 1);
	tmp_buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, tmp_buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buffer);
			free(tmp_buffer);
			return (NULL);
		}
		tmp_buffer[bytes_read] = 0;
		buffer = join_and_free(buffer, tmp_buffer);
		if (ft_strchr(tmp_buffer, '\n'))
			break ;
	}
	free(tmp_buffer);
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer[1024];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer[fd] = read_from_file(fd, buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	line = extract_line(buffer[fd]);
	buffer[fd] = extract_remaining_text(buffer[fd]);
	return (line);
}
