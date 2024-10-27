#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}
// static void to_upper(unsigned int index, char *c) {
//     if (index % 2 == 0 && *c >= 'a' && *c <= 'z')
//         *c -= 32;  // Convertir en majuscule si l'index est pair
// }