/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchenier <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:18:58 by pchenier          #+#    #+#             */
/*   Updated: 2022/01/23 15:42:46 by pchenier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int *ptr;
	int *ptr2;
	int **ptr3;



	ptr = &a;
	printf("%p\n", ptr);
	ptr = &b;
	printf("%p\n", ptr);
	ptr = &c;
	printf("%p\n", ptr);
	*ptr2 = ptr;
	printf("%p\n", ptr);
	ptr3 = &ptr;
	printf("%p\n", *ptr3);
	return(0);



}

