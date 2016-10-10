/*
** main.c for String.c in /Users/vicostudio/Documents/Work/WorkInProgress/String.c/src/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Oct 10 10:17:49 2016 John Doe
** Last update Mon Oct 10 14:36:59 2016 John Doe
*/

#include 	"MyString.h"

int		main(void)
{

  m_string string = ConstructStringFromStr("hello everybody\n");
  string->Print(string, STRING_TERM_FD);
  string->AppendChar(string, 'b');
  string->Print(string, STRING_TERM_FD);
  string->Destruct(&string);

  return (0);
}
