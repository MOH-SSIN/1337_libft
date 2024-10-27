#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)//n : Nombre d'octets à comparer.
{
	const unsigned char	*ptr_1;
	const unsigned char	*ptr_2;
	size_t	i;

	i = 0;
	ptr_1 = (const unsigned char *)s1;
	ptr_2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ptr_1[i] != ptr_2[i])
			return (ptr_1[i] - ptr_2[i]);
		i++;
	}
	return (0);
}