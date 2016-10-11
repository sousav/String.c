/*
** MyString_CharAtIndex.c for String.c in /Users/vicostudio/Documents/Shared Folder/Work/WorkInProgress/String.c/src/MyString/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Oct 11 09:41:21 2016 John Doe
** Last update Tue Oct 11 09:45:23 2016 John Doe
*/

#include	"MyString.h"

char		CharAtIndexInString(t_string *self, int index)
{
  if (index < 0 || index > my_strlen(self->content))
    return (STRING_ERROR);
  return (self->content[index]);
}
