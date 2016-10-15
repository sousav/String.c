#include "MyString.h"

char *StringToCharArray(t_string *self)
{
  return (my_strdup(self->content));
}
