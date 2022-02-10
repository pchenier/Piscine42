/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchenier <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 09:51:19 by pchenier          #+#    #+#             */
/*   Updated: 2022/02/03 15:11:22 by pchenier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;	

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z' )
			&& (str[i - 1] > 122 || str[i - 1] < 97)
			&& (str[i - 1] > 57 || str[i - 1] < 48)
			&& (str[i - 1] < 65 || str[i - 1] > 90))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
