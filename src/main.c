/*
** main.c for String.c in /Users/vicostudio/Documents/Work/WorkInProgress/String.c/src/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Oct 10 10:17:49 2016 John Doe
** Last update Tue Oct 11 10:32:32 2016 John Doe
*/

#include 	"MyString.h"

int		main(void)
{

  m_string string = ConstructStringFromStr("HELLO everyboDY, how aRe you\n");
  string->Print(string, STRING_TERM_FD);

  m_string * StringArray = string->SplitWithChar(string, ' ');
  int i = -1;
  while (StringArray[++i])
    {
      StringArray[i]->Print(StringArray[i], STRING_TERM_FD);
      my_putchar('\n', STRING_TERM_FD);
    }

  string->Print(string, STRING_TERM_FD);
  string->Destruct(&string);

  return (0);
}
