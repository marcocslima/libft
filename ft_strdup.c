/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:26:15 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/04/13 14:56:27 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *new_src;
	int index;

	new_src = malloc((ft_strlen(s) + 1) * sizeof(char));
	index = 0;
	while(index < (ft_strlen(s) + 1))
	{
		new_src[index] = s[index]; 
		index++;	
	}
	return(new_src);
}
