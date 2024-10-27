#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	size_t	i;// ou ulise la fonction ft_strlen(s);

	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
	write(fd, "\n", 1);
}