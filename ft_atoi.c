/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <vtouze@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 22:00:34 by vtouze            #+#    #+#             */
/*   Updated: 2023/03/02 16:58:39 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	neg;

	res = 0;
	neg = 0;
	if (str)
	{
		while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
			str++;
		if (*str == '-')
		{
			neg = -1;
			str++;
		}
		else if (*str == '+')
			str++;
		while (*str >= '0' && *str <= '9')
		{
			res = res * 10 + (*str - '0');
			str++;
		}
	}
	if (neg < 0)
		return (-res);
	return (res);
}

/*La fonction atoi prend en entrée une string
et retourne sa valeur numérique en tant qu'entier (int).
Le traitement commence par initialiser deux variables res et neg à zéro.
La boucle while qui suit permet de parcourir la chaîne str
en sautant tous les caractères d'espacement 
(' ' et les caractères de tabulation, retour à la ligne, etc.) 
qui précèdent le premier caractère significatif.
Ensuite, si le premier caractère de la chaîne est un signe moins ('-'), 
la variable neg est initialisée à -1 et le caractère est ignoré.
Si le premier caractère est un signe plus ('+'), il est simplement ignoré.
La boucle while suivante parcourt tous les caractères numériques qui suivent, 
les ajoute à res et multiplie res par 10 à chaque itération 
pour décaler les chiffres déjà ajoutés d'une position.
Finalement, si neg est négatif, la valeur retournée est l'opposé de res, 
sinon la valeur de res est retournée.*/
