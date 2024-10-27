#include "libft.h"


char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	size;
	char	*ptr;

	i = 0;
	ptr = (char *)haystack;
	size = ft_strlen(needle);

	if (!size)
		return (ptr);
		
	while (ptr[i] != '\0' && i < len)
	{
		c = 0;
		while (ptr[i + c] != '\0' && needle[c] != '\0'
				&& ptr[i + c] == needle[c] && i + c < len)
			c++;
		if (c == size)
			return (ptr + i);
		i++;
	}
	return (0);
}