/*
** MyString_Lenght.c for String.c in /Users/vicostudio/Documents/Shared Folder/Work/WorkInProgress/String.c/src/MyString/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Oct 11 09:48:31 2016 John Doe
** Last update Tue Oct 11 09:49:04 2016 John Doe
*/

#include	"MyString.h"

int		StringLenght(t_string *self)
{
  return (my_strlen(self->content));
}
