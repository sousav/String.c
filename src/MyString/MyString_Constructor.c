/*
** MyString_Constructor.c for String.c in /Users/vicostudio/Documents/Work/WorkInProgress/String.c/src/MyString/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Oct 10 12:17:29 2016 John Doe
** Last update Tue Oct 11 11:00:34 2016 John Doe
*/

#include		"MyString.h"

t_string		*ConstructStringFromStr(char *str)
{
  t_string 		*self;

  self = malloc(sizeof(t_string));
  if (self == NULL)
    return(NULL);

  self->Print = PrintString;

  self->ToCharArray = StringToCharArray;

  self->Lenght = StringLenght;

  self->AppendChar = AppendCharToString;
  self->AppendCharArray = AppendCharArrayToString;
  self->AppendString = AppendStringToString;

  self->ToUpperCase = StringToUpperCase;
  self->ToLowerCase = StringToLowerCase;

  self->ContainsChar = StringContainsChar;
  self->ContainsCharArray = StringContainsCharArray;
  self->ContainsString = StringContainsString;

  self->CharAtIndex = CharAtIndexInString;

  self->StringAfterIndex = StringAfterIndexInString;
  self->StringBeforeIndex = StringBeforeIndexInString;
  self->StringBetweenIndex = StringBetweenIndexInString;

  self->SplitWithChar = StringSplitWithChar;
  self->SplitWithCharArray = StringSplitWithCharArray;
  self->SplitWithString = StringSplitWithString;

  self->Destruct = DestructString;

  self->content = my_strdup(str);
  return(self);
}
