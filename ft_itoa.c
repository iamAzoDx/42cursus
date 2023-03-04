/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <vtouze@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:47:26 by vtouze            #+#    #+#             */
/*   Updated: 2023/03/03 14:58:58 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(int n)
{
	int		i;
	size_t	nu;

	i = 1;
	if (n < 0)
	{
		i++;
		nu = (size_t)n * -1;
	}
	else
		nu = (size_t)n;
	while (nu > 9)
	{
		nu /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	size_t	nn;
	int		a;

	if (n < 0)
		a = -1;
	else
		a = 1;
	i = ft_len(n);
	nn = (size_t)n * a;
	s = ft_calloc(i + 1, sizeof(char));
	if (!s)
		return (NULL);
	while (nn > 9)
	{
		i--;
		s[i] = (nn % 10) + '0';
		nn /= 10;
	}
	s[i - 1] = nn + '0';
	if (a == -1)
		s[i - 2] = '-';
	return (s);
}

/*On utilise ft_len pour determiner la longueur de la chaine de char
necessaire pour stocker notre int
On calcul la longueur de l'int en comptant le nombre de chiffres et on ajoute
un signe negatif si il est present
Ensuite onn alloue de la memoire avec Calloc
la variable A est utilise  pour stocker le signe de l'int
si n est negatif a = -1 sinon a = 1
on initialise la variable nn a sa valeur absolue obtenue en multipliant n par a
la boucle while sert a parcourir la variable nn afin de stocker dans la var s
la boucle se termine quand nn est <= 9
enfin si a = -1 un signe negatif est ajoute a i - 2
la fonction itoa retourne un * vers la nouvelle string venant d'etre creer*/
