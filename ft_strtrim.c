#include "libft.h"

static int ft_trouver(char c, const char *set2) {
    while (*set2)
    {
        if (*set2 == c)
            return (1);
        set2++;
    }
    return (0);
}

static int  ft_index_debut(const char *s1, const char *set)
{
    int debut = 0;
    while (s1[debut] && ft_trouver(s1[debut], set))
        debut++;
    return (debut);
}

static int ft_index_fin(const char *s1, const char *set)
{
    int fin = ft_strlen(s1) - 1;
    while (fin > 0 && ft_trouver(s1[fin], set))// fin > 0 hite fjami3e 7alate 4di nkhali case wa7da
        fin--;
    return (fin);
}   

char    *ft_new_chaine(char *ptr,const char* s1,int debut,size_t len)
{
    for (size_t i = 0; i < len; i++)
        ptr[i] = s1[debut + i];
    ptr[len] = '\0';
    return(ptr);
}

char *ft_strtrim(char const *s1, char const *set) 
{
    int debut;
    int fin;
    size_t  len;
    char    *ptr;

    if (!s1 || !set)
        return NULL;
    if (!(*s1))
    {
        ptr = malloc(sizeof(char) * 1);
        *ptr = 0;
        return (ptr);
    }

    debut = ft_index_debut(s1, set);
    fin = ft_index_fin(s1, set);

    if (debut > fin)// cas dyal s1="###" et set="#"
        return strdup("");

    len = fin - debut + 1;
    ptr = (char *)malloc(sizeof(char) * (len + 1));
    if (!ptr)
        return NULL;

    
    return (ft_new_chaine(ptr,s1,debut,len));
}