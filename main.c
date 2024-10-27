#include <unistd.h> // pour write()
#include "libft.h"


int main() {
    // const char *errorMessage = "Ceci est un message d'erreur écrit sur stderr.\n";
    
    // // Écrire dans stderr (sortie d'erreur) avec fd = 2
    // write(2, errorMessage, strlen(errorMessage));  // fd = 2 pour stderr
    // size_t x = sizeof(errorMessage);
    // printf("x est :%zu \n",x);
    // write(2, errorMessage, x);  // fd = 2 pour stderr
    size_t x = sizeof(char);
    size_t y = sizeof(const char);
    size_t z = sizeof(const char *);
    size_t a = sizeof(const char **);
    printf("x est :%zu \n",x);
    printf("y est :%zu \n",y);
    printf("z est :%zu \n",z);
    printf("a est :%zu \n",a);
    return 0;
}
