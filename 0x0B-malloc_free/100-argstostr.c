#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments given by the user
 * @ac: number of arguments
 * @av: array of pointers to the arguments
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av) {
  int i, j, total_length = 0;
  char *str;

  if (ac == 0 || av == NULL) {
    return NULL;
  }

  // Calculate the total length of the concatenated string.
  for (i = 0; i < ac; i++) {
    total_length += strlen(av[i]) + 1; // add 1 for the newline character
  }

  // Allocate memory for the concatenated string.
  str = malloc(sizeof(char) * (total_length + 1));
  if (str == NULL) {
    return NULL;
  }

  // Concatenate all the arguments.
  i = 0;
  j = 0;
  while (i < ac) {
    while (av[i][j] != '\0') {
      str[j] = av[i][j];
      j++;
    }
    str[j++] = '\n';
    i++;
  }

  // Add the terminating null character.
  str[j] = '\0';

  return str;
}
