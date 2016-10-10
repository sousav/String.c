/*
** MyString_Constructor.c for String.c in /Users/vicostudio/Documents/Work/WorkInProgress/String.c/src/MyString/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Oct 10 12:17:29 2016 John Doe
** Last update Mon Oct 10 15:03:01 2016 John Doe
*/

#include		"MyString.h"

t_string		*ConstructStringFromStr(char *str)
{
  t_string 		*self;

  self = malloc(sizeof(t_string));
  if (self == NULL)
    return(NULL);

  self->Print = PrintString;
  self->AppendChar = AppendCharToString;
  self->Destruct = DestructString;

  self->content = my_strdup(str);

  return(self);
}
