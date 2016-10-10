/*
** MyString_Contains.c for String.c in /Users/vicostudio/Documents/Shared Folder/Work/WorkInProgress/String.c/src/MyString/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Oct 10 16:37:57 2016 John Doe
** Last update Mon Oct 10 17:01:18 2016 John Doe
*/

#include	"MyString.h"

int 		StringContainsChar(t_string *self, char c)
{
  int		i;

  i = 0;
  while (self->content[i])
    {
      if (self->content[i] == c)
	return (STRING_SUCCESS);
      i++;
    }
  return (STRING_ERROR);
}

int 		StringContainsCharArray(t_string *self, char *toFind)
{
  return (my_strstr(self->content, toFind));
}

int 		StringContainsString(t_string *self, t_string *toFind)
{
  return (my_strstr(self->content, toFind->content));
}
