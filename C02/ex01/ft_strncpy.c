/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchenier <pchenier@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:19:58 by pchenier          #+#    #+#             */
/*   Updated: 2022/01/28 09:59:20 by pchenier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && n > i)
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
