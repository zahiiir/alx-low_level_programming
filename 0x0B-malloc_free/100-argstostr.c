#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatène tous les arguments passés en paramètre
* @ac: nombre d'arguments
* @av: tableau de pointeurs vers les arguments
* Return: pointeur vers la nouvelle chaîne de caractères concaténée
*/
char *argstostr(int ac, char **av)
{
    int i, n, r = 0, l = 0;
    char *str;

    if (ac == 0 || av == NULL)
        return (NULL);

    for (i = 0; i < ac; i++)
    {
        for (n = 0; av[i][n]; n++)
            l++;
        l++;
    }

    str = malloc(sizeof(char) * (l + 1));

    if (str == NULL)
        return (NULL);

    for (i = 0; i < ac; i++)
    {
        for (n = 0; av[i][n]; n++)
        {
            str[r] = av[i][n];
            r++;
        }
        str[r] = '\n'; // Ajoute le caractère de nouvelle ligne à la position r
        r++;
    }

    str[r] = '\0'; // Assure que la chaîne est correctement terminée par le caractère nul
    return (str);
}
