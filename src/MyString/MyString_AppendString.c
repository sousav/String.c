/*
** MyString_AppendString.c for String.c in /Users/vicostudio/Documents/Shared Folder/Work/WorkInProgress/String.c/src/MyString/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Oct 10 15:12:11 2016 John Doe
** Last update Mon Oct 10 15:36:28 2016 John Doe
*/

#include	"MyString.h"

int 		AppendStringToString(struct s_string *self, struct s_string *toAdd)
{
  char		*old_content;
  char		*add_content;
  char		*new_content;
  int		i;
  int		j;

  old_content = self->content;
  add_content = toAdd->content;
  new_content = malloc(sizeof(char) * (my_strlen(old_content) + my_strlen(add_content) + 1));
  if (new_content == NULL)
    return (STRING_ERROR);
  j = 0;
  i = 0;
  while (old_content[i])
    new_content[j++] = old_content[i++];
  i = 0;
  while (add_content[i])
    new_content[j++] = add_content[i++];
  new_content[j] = '\0';
  self->content = new_content;
  free(old_content);
  return (STRING_SUCCESS);
}
