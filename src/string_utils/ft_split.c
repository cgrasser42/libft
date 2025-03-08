/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 08:37:51 by cgrasser          #+#    #+#             */
/*   Updated: 2025/03/08 09:52:36 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_split_process(char const *s, char *char_set, int *i, int *start)
{
	while (s[*i] && ft_strchr(char_set, s[*i]))
		(*i)++;
	*start = *i;
	while (s[*i] && !ft_strchr(char_set, s[*i]))
		(*i)++;
}

char	**ft_split(char const *s, char *char_set)
{
	char	**to_return;
	int		len_tab;
	int		start;
	int		i;
	int		j;

	start = 0;
	i = 0;
	j = 0;
	len_tab = ft_strcount(s, char_set);
	to_return = (char **) malloc((len_tab + 1) * sizeof(char *));
	if (!to_return)
		return (NULL);
	while (s[i])
	{
		ft_split_process(s, char_set, &i, &start);
		if (start < i)
		{
			to_return[j++] = ft_substr(s, (size_t)start, (size_t)(i - start));
			if (!to_return[j - 1])
				return (ft_strsclear(to_return), NULL);
		}
	}
	to_return[j] = NULL;
	return (to_return);
}
