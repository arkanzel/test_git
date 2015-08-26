#include <stdio.h>
#include <stdlib.h>


char *ft_capitalize (char *str)
{
	str[0] -= ('a' - 'A');
	return str;
}


int main(void)
{
	printf("Modifié depuis github\n");
	return 0;
}
