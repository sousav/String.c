/*
** MyString_StrUtils_1.c for str.c in /Users/vicostudio/Documents/Work/WorkInProgress/String.c/src/MyString/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Oct 10 14:15:49 2016 John Doe
** Last update Mon Oct 10 17:00:01 2016 John Doe
*/

#include		"MyString.h"

void			my_putchar(char c, int fd)
{
  write(fd, &c, 1);
}

void 			my_putstr(char *str, int fd)
{
  int			i;

  i = 0;
  while (str[i])
    my_putchar(str[i++], fd);
}

int			my_strlen(char* str)
{
        int 			i;

        i = 0;
        while (str[i])
        i++;
        return (i);
}

char			*my_strdup(char *src)
{
  char			*str;
  int			i;

  if ((str = malloc(sizeof(char) * (my_strlen(src) + 1))) == NULL)
    return (STRING_ERROR);
  i = 0;
  while (src[i])
    {
      str[i] = src[i];
      i++;
    }
  str[i] = '\0';
  return (str);
}

int			my_strstr(char *str, char *toFind)
{
  int	i;

  if (str[0] != '\0')
    {
      i = 0;
      while (toFind[i] != '\0')
	{
	  if (toFind[i] != str[i])
	    return (my_strstr(str + 1, toFind));
	  i++;
	}
      return (STRING_SUCCESS);
    }
  else
    return(STRING_ERROR);
}
