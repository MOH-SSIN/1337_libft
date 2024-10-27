#include "libft.h"

static int nbr_word(const char *str, char c)
{
    int chek;
    size_t  size;
    int i;
    int nbr;

    nbr = 0;
    chek = 0;
    i = 0;
    size = ft_strlen(str); 
    while(i < (int)size)
    {
        if(str[i] != c && chek == 0)
        {
            chek = 1;
            nbr++;
        }
        if(str[i] == c && chek == 1)
            chek = 0;
        i++;
    }
    return(nbr);
}
static char *copier_word(const char *str, int debut, int fin)
{
    int i;
    int len;

    len = fin - debut;
    char *ptr = (char *)malloc((len + 1) * sizeof(char));
    if(!ptr)
        return(NULL);
    i = 0;
    while(i < len)
        ptr[i++] = str[debut++];
    ptr[i] = '\0';
    return(ptr);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((nbr_word(s, c) + 1) * sizeof(char *));// 
	if (!s || !split)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))// pour tester l7ala dyal s wsl lfin dyalo
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s) ) && index >= 0)
		{
			split[j++] = copier_word(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0; // ou split[j] ="Null"
	return (split);
}

// char	**ft_split(char const *s, char c)
// {
//     char **split;
//     int chek;
//     int index_debut;
//     size_t i;
//     int j;

//     if(!s)
//         return (NULL);
//     split = (char **)malloc((nbr_word(s,c) + 1 ) * sizeof(char *));
//     if(!split)
//         return(NULL);
//     chek = 0;
//     i = 0;
//     j = 0;
//     while(i <=  ft_strlen(s))
//     {
//         if(s[i] != c && chek == 0)
//         {
//             index_debut = i;
//             chek = 1;
//         }
//         if((s[i] == c || i == ft_strlen(s)) && chek == 1)
//         {
//             split[j++] = copier_word(s,index_debut,i);
//             chek = 0;
//         }
// 		i++;
//     }
//     split[j] = NULL;
//     return(split);
// }