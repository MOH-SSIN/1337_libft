#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	if(!dst && !src)// hna fin kan faut
		return (NULL);

	d = (char *)dst;
	s = (const char *)src;
	i = 0;
	
	if (d > s)
	{
		while (len-- > 0)
		{
			d[len] = s[len];
		}
			
	}
	else
	{
		while (i < len)
	{
        d[i] = s[i];
        i++;
	}
	}
	return (dst);
}