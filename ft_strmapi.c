#include "libft.h"


char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new;

	new = malloc(sizeof(char) * (strlen(s) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

// static char to_upper(unsigned int index, char c) {
//     if (index % 2 == 0 && c >= 'a' && c <= 'z') {
//         return c - 32;  // Convertir en majuscule si l'index est pair
//     }
//     return c;
// }