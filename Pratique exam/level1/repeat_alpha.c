/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchenier <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:19:13 by pchenier          #+#    #+#             */
/*   Updated: 2022/02/10 14:19:37 by pchenier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	lettre;
	int	repete;

	if (argc == 2)
	{
		lettre = 0;
		while (argv[1][lettre])
		{
			repete = 1;
			if(argv[1][lettre] >= 'a' && argv[1][lettre]<= 'z')
				repete += argv[1][lettre] - 'a';
			else if (argv[1][lettre] >= 'A' && argv[1][lettre] <= 'Z')
				repete += argv[1][lettre] - 'A';
			while (repete)
			{
				write(1, &argv[1][lettre], 1);
				repete--;
			}
			lettre++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
