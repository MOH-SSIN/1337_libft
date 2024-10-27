#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}

// int main()
// {
//     int *q= calloc(5,sizeof(int));
//     int *p  = ft_calloc(5,sizeof(int));
//     int i = -1;
//     while(++i < 5)
//     {
//         printf("p[%d] == %d\n",i,p[i]);
//         printf("q[%d] == %d\n",i,q[i]);

//     }

//     return(0);
// }

