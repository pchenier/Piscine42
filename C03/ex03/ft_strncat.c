/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchenier <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 09:39:58 by pchenier          #+#    #+#             */
/*   Updated: 2022/02/03 10:06:53 by pchenier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		++j;
	while (src[i] != '\0' && i < nb)
	{
		dest[i + j] = src[i];
		++i;
	}
	dest[i + j] = '\0';
	return (dest);
}
