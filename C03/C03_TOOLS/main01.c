#include <stdio.h>
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
    char    s1[] = "bonjour";
    char    s2[] = "bonzour";
    char    s3[] = "bonbour";
    char    s4[] = "bonjou";
    char    s5[] = "Bonjour!";
    
    printf("\ntest1\nAttendu : %d\nFonction: %d", strncmp(s1, s1, 4), ft_strncmp(s1, s1, 4));
    printf("\ntest2\nAttendu : %d\nFonction: %d", strncmp(s1, s1, 3), ft_strncmp(s1, s1, 3));
    printf("\ntest3\nAttendu : %d\nFonction: %d", strncmp(s1, s2, 4), ft_strncmp(s1, s2, 4));
    printf("\ntest4\nAttendu : %d\nFonction: %d", strncmp(s1, s2, 3), ft_strncmp(s1, s2, 3));
    printf("\ntest5\nAttendu : %d\nFonction: %d", strncmp(s1, s3, 4), ft_strncmp(s1, s3, 4));
    printf("\ntest6\nAttendu : %d\nFonction: %d", strncmp(s1, s3, 3), ft_strncmp(s1, s3, 3));
    printf("\ntest7\nAttendu : %d\nFonction: %d", strncmp(s1, s4, 7), ft_strncmp(s1, s4, 7));
    printf("\ntest8\nAttendu : %d\nFonction: %d", strncmp(s1, s5, 8), ft_strncmp(s1, s5, 8));
}
