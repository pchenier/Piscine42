/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:15:31 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/26 07:59:17 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main()
{
	char	src[] = "ABCDEFGHIJ";
	char	dest[11];
    char    dest2[11];
    unsigned int    i;
    unsigned int    i2;
    unsigned int    test = 1;
    unsigned int    testval[] = {8, 11, 3};
    
    printf("---------------------------------------------------------------\n");
    printf("Doit reproduire strlcpy\n");
    printf("Input string: %s", src);
    while (test <= 3)
    {
        i = ft_strlcpy(dest, src, testval[test - 1]);
        i2 = strlcpy(dest2, src, testval[test - 1]);
        printf("\n\nTest%d\ninput size: %d\nRetour attendu : %s\nRetour Dest    : %s\nRetour attendu2: %d\nRetour fonction: %d",test, testval[test - 1], dest2, dest, i2, i);
        test++;
    }
    printf("\n***************************************************************");
}
