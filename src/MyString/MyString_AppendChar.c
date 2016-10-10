/*
** MyString_AppendChar.c for String.c in /Users/vicostudio/Documents/Work/WorkInProgress/String.c/src/MyString/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Oct 10 14:07:07 2016 John Doe
** Last update Mon Oct 10 14:21:49 2016 John Doe
*/

#include		"MyString.h"

int 			AppendChar(struct s_string *self, char c)
{
  char 			*old_content;
  char			*new_content;
  int			i;

  old_content = self->content;
  new_content = malloc(sizeof(char) * (my_strlen(old_content) + 2));
  if (new_content == null)
    return (STRING_ERROR);
  i = 0;
  while (old_content[i])
    {
      new_content[i] = old_content[i];
      i++;
    }
  new_content[i++] = c;
  new_content[i++] = '\0';
  self->content = new_content;
  free(old_content);
  return (STRING_SUCCESS);
}
