#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings together
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2) {
  size_t s1_len, s2_len, total_len;
  char *str;

  if (s1 == NULL) {
    s1 = "";
  }
  if (s2 == NULL) {
    s2 = "";
  }

  // Calculate the total length of the concatenated string.
  s1_len = strlen(s1);
  s2_len = strlen(s2);
  total_len = s1_len + s2_len + 1; // add 1 for the terminating null character

  // Allocate memory for the concatenated string.
  str = malloc(sizeof(char) * total_len);
  if (str == NULL) {
    return NULL;
  }

  // Concatenate the two strings.
  memcpy(str, s1, s1_len);
  memcpy(str + s1_len, s2, s2_len);

  // Add the terminating null character.
  str[total_len - 1] = '\0';

  return str;
}
