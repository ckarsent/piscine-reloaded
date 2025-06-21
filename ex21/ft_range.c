/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:57:48 by ckarsent          #+#    #+#             */
/*   Updated: 2024/11/06 14:58:10 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	j;

	i = min;
	j = 0;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min) + 1);
	if (!tab)
		return (0);
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	tab[j] = '\0';
	return (tab);
}
