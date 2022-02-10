#include <stdio.h>

int main(void)

{
	int a;
	int *ptr;

	a = 56;
	ptr = &a;

	printf("%d\n",  *ptr);
	*ptr = 78; // changer la variable de "a"//
	printf("%d\n",  a);


	return(0)

}
