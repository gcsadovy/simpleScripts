#include <stdio.h>

//you set a pointer
const char *array[] = {
  "First entry",
  "Second entry",
  "Third entry",
};

#define n_array (sizeof(array) / sizeof (const char *))

/*int main()
{
  int i;

  for (i = 0; i < n_array; i++) {
    printf("%d: %s\n", i, array[i]);
  }
  return 0;
} */

int main()
{
  for (; *array != '\0'; *array++)
    if (*array != '\0')
      printf("%s\n", *array);
  return 0;
}

