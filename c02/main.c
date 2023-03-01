#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	i = 0;
	while (src[i] != '\0'&& i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main() 
{
	char src[] = "merhaba";
	char dest[]= "selam";
	char dest1[]= "hello world";
	char src1[] = "ccc";
   
   	printf("\n%s", ft_strncpy(dest1, src, 3));
	printf("\n%s", ft_strncpy(dest, src, 5));
	printf("\n%s", ft_strncpy(dest1, src, 5));
	printf("\n%s", ft_strncpy(dest, src1, 7));
	printf("\n%s", ft_strncpy(dest1, src1, 2));  
	
		
	return 0;
}
