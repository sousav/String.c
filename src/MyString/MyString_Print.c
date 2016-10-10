/*
** MyString_Print.c for String.c in /Users/vicostudio/Documents/Work/WorkInProgress/String.c/src/MyString/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Oct 10 12:34:09 2016 John Doe
** Last update Mon Oct 10 14:24:42 2016 John Doe
*/

#include		"MyString.h"

void			PrintString(m_string *self, int out_fd)
{
  my_putstr(self->content, out_fd);
}
