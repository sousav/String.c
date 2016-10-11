/*
** MyString_StringAfterIndex.c for String.c in /Users/vicostudio/Documents/Shared Folder/Work/WorkInProgress/String.c/src/MyString/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Oct 11 10:03:38 2016 John Doe
** Last update Tue Oct 11 10:10:37 2016 John Doe
*/

#include	"MyString.h"

t_string	*StringAfterIndexInString(t_string *self, int index)
{
  index++;
  if (index < 0 || index > my_strlen(self->content))
    return (STRING_ERROR);
  return ConstructStringFromStr(self->content + index);
}
