/*
** MyString_Constructor.c for String.c in /Users/vicostudio/Documents/Work/WorkInProgress/String.c/src/MyString/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Oct 10 12:17:29 2016 John Doe
** Last update Mon Oct 10 12:36:35 2016 John Doe
*/

#include		"MyString.h"

m_string		*ConstructStringFromStr(char *str)
{
  m_string 		*self;

  self = malloc(sizeof(m_string));
  if (self == NULL)
    return(NULL);

  /* affectation des méthodes publiques */
  self->Print = PrintString;

  self->Destruct = DestructString;

  /* initialisation des propriétés */

  return(self);
}
