#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	taill_dst;
	size_t	taill_src;

	taill_src = ft_strlen(src);
	if (!dst && size == 0)
		return (taill_src);
	d = ft_strlen(dst);
	taill_dst = d;
	if (size <= taill_dst)
		return (size + taill_src);
	i = 0;
	while (src[i] && d < size - 1)
	{
		dst[d] = src[i];
		i++;
		d++;
	}
	dst[d] = 0;
	return (taill_dst + taill_src);
}
