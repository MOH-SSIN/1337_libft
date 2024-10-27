#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
		ptr[i++] = (unsigned char)c;
	return (b);
}

// int main ()
// {
// 	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
// 	ft_memset(arr, 2, 5 * sizeof(int));  // Remplir les 5 premiers entiers avec 0


// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n");

// 	return 0;
// }
// exmple pour une chaine de caractere
// int main ()
// {
// 	// int str[1];
// 	// int a = 1337;

// 	// ft_memset(str,a,sizeof(int));
// 	// printf("%s\n",ft_memset(str,a,sizeof(int)));
// 	char str[2];

// 	printf("%s",ft_memset(str,'1',1));
// 	printf("%s",ft_memset(str,'3',1));
// 	printf("%s",ft_memset(str,'3',1));
// 	printf("%s",ft_memset(str,'7',1));

// 	return (0);
// }
