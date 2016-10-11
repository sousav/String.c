/*
** MyString_StringAfterIndex.c for String.c in /Users/vicostudio/Documents/Shared Folder/Work/WorkInProgress/String.c/src/MyString/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Oct 11 10:03:38 2016 John Doe
** Last update Tue Oct 11 11:12:49 2016 John Doe
*/

#include	"MyString.h"

t_string	*StringAfterIndexInString(t_string *self, int index)
{
  if (index < 0 || index > my_strlen(self->content))
    return (STRING_ERROR);
  return ConstructStringFromStr(self->content + index);
}

t_string	*StringBeforeIndexInString(t_string *self, int index)
{
  char		*copy_str;
  t_string	*out;

  if (index < 0 || index + 1 > my_strlen(self->content))
    return (STRING_ERROR);
  copy_str = my_strdup(self->content);
  if (copy_str == NULL)
    return (STRING_ERROR);
  copy_str[index + 1] = '\0';
  out = ConstructStringFromStr(copy_str);
  free(copy_str);
  return (out);
}

t_string	*StringBetweenIndexInString(t_string *self, int indexStart, int indexEnd)
{
  char		*copy_str;
  t_string	*out;

  if (indexStart < 0 || indexEnd + 1 > my_strlen(self->content) || indexEnd + 1 <= indexStart)
    return (STRING_ERROR);
  copy_str = my_strdup(self->content + indexStart);
  if (copy_str == NULL)
    return (STRING_ERROR);
  copy_str[indexEnd - indexStart + 1] = '\0';
  out = ConstructStringFromStr(copy_str);
  free(copy_str);
  return (out);
}
