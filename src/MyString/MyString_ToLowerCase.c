/*
** MyString_ToLowerCase.c for String.c in /Users/vicostudio/Documents/Shared Folder/Work/WorkInProgress/String.c/src/MyString/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Oct 10 16:07:24 2016 John Doe
** Last update Mon Oct 10 16:08:32 2016 John Doe
*/

#include	"MyString.h"

void		StringToLowerCase(t_string *self)
{
  int		i;

  i = 0;
  while (self->content[i])
    {
      if (self->content[i] >= 'A' && self->content[i] <= 'Z')
	self->content[i] = self->content[i] + 32;
      i++;
    }
}
