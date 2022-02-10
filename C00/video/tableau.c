#include <stdio.h>
					#LES TABLEAUX STATIQUES#
int main()
{
	int a[10][10];
	int b;

	b = 3
	a[0][b] = 12;
	a[9][2] = 15;
	a[9][3] = 1234;
	a[3][6] = a[0][b];
	
	printf("%d\n", a[3][6]); 



}

