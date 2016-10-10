/*
** MyString_ToUpperCase.c for String.c in /Users/vicostudio/Documents/Shared Folder/Work/WorkInProgress/String.c/src/MyString/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Oct 10 15:57:42 2016 John Doe
** Last update Mon Oct 10 16:06:50 2016 John Doe
*/

#include	"MyString.h"

void		StringToUpperCase(t_string *self)
{
  int		i;

  i = 0;
  while (self->content[i])
    {
      if (self->content[i] >= 'a' && self->content[i] <= 'z')
	self->content[i] = self->content[i] - 32;
      i++;
    }
}
