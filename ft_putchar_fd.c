#include "libft.h"


void ft_putchar_fd(char c, int fd)
{
    write(fd,&c,1);
}
/*
    O_RDONLY : ouvrir le fichier en lecture seule.
    O_WRONLY : ouvrir le fichier en écriture seule.
    O_RDWR : ouvrir le fichier en lecture et écriture.
    O_CREAT : créer le fichier s'il n'existe pas.
    O_APPEND : écrire à la fin du fichier sans modifier le contenu existant.
    declaration :
    int open(const char *pathname, int flags);
    int open(const char *pathname, int flags, mode_t mode);
    mode (facultatif) : les permissions à appliquer au fichier s'il est créé (par exemple, 0664).
*/