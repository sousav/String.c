/*
** main.c for String.c in /Users/vicostudio/Documents/Work/WorkInProgress/String.c/src/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Oct 10 10:17:49 2016 John Doe
** Last update Mon Oct 10 15:23:20 2016 John Doe
*/

#include 	"MyString.h"

int		main(void)
{

  m_string string = ConstructStringFromStr("hello");
  string->Print(string, STRING_TERM_FD);

  m_string string2 = ConstructStringFromStr("everybody");
  string->AppendString(string, string2);
  string2->Destruct(&string2);
  
  string->Print(string, STRING_TERM_FD);
  string->Destruct(&string);

  return (0);
}
