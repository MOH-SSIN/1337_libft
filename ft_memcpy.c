#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t              i;
	unsigned char       *s1;
	unsigned char       *s2;

	s1 = (unsigned char *)dst;
    s2 = (unsigned char *)src;

    
    // if(!s1 || !s2)
    //     return (0);
	if (!dst || !src || n == 0) {
        return dst;
    }
	i = 0;
	while (i < n)
	{
        s1[i] = s2[i];
        i++;
	}
	return (dst);
}
// int main()
// {
// 	printf("%s\n",ft_memcpy("mohcine",NULL,5));
// 	return (0);
// }