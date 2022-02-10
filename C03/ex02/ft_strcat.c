/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchenier <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:05:38 by pchenier          #+#    #+#             */
/*   Updated: 2022/02/03 09:43:10 by pchenier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
			++j;
	while (src[i] != '\0')
	{
		dest[i + j] = src[i];
		++i;
	}
	dest[i + j] = '\0';
	return (dest);
}
