/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 22:23:40 by vtouze            #+#    #+#             */
/*   Updated: 2023/02/13 18:39:56 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ns;
	size_t	i;

	i = 0;
	ns = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!ns)
		return (NULL);
	while (s[i])
	{
		ns[i] = s[i];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
/*
int main() 
{
    char *origin_str = "Hello, World!";
    char *dup_str = strdup(origin_str);

    printf("Original string: %s\n", origin_str);
    printf("Duplicated string: %s\n", dup_str);

    free(dup_str);

    return 0;
}*/
