/*
** MyString_AppendCharArray.c for String.c in /Users/vicostudio/Documents/Shared Folder/Work/WorkInProgress/String.c/src/MyString/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Oct 10 15:37:24 2016 John Doe
** Last update Mon Oct 10 15:38:15 2016 John Doe
*/

#include	"MyString.h"

int 		AppendCharArrayToString(struct s_string *self, char *toAdd)
{
  char		*old_content;
  char		*new_content;
  int		i;
  int		j;

  old_content = self->content;
  new_content = malloc(sizeof(char) * (my_strlen(old_content) + my_strlen(toAdd) + 1));
  if (new_content == NULL)
    return (STRING_ERROR);
  j = 0;
  i = 0;
  while (old_content[i])
    new_content[j++] = old_content[i++];
  i = 0;
  while (toAdd[i])
    new_content[j++] = toAdd[i++];
  new_content[j] = '\0';
  self->content = new_content;
  free(old_content);
  return (STRING_SUCCESS);
}
