/*
** MyString_Destructor.c for String.c in /Users/vicostudio/Documents/Work/WorkInProgress/String.c/src/MyString/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Oct 10 12:25:02 2016 John Doe
** Last update Mon Oct 10 12:29:28 2016 John Doe
*/

#include		"MyString.h"

void 			DestructString(t_string **self)
{
  free(*self);
  *self = NULL;
  return;
}
