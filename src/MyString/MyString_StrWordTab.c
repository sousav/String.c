/*
** MyString_StrWordTab.c for String.c in /Users/vicostudio/Documents/Shared Folder/Work/WorkInProgress/String.c/src/MyString/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Oct 11 10:19:01 2016 John Doe
** Last update Tue Oct 11 10:19:16 2016 John Doe
*/

#include		"MyString.h"

static int		is_separate(char c, char *str)
{
  int			i;

  i = 0;
  while (str[i])
    {
      if (str[i] == c)
	return (1);
      i++;
    }
  return (0);
}

static char		*size_word(char *str, char *separate, int *i)
{
  char			*result;
  int			size;
  int			j;

  size = 0;
  j = *i;
  while (str[j] && is_separate(str[j], separate) == 0)
    {
      size++;
      j++;
    }
  if ((result = malloc(sizeof(char) * (size + 1))) == NULL)
    return (NULL);
  j = 0;
  while (str[*i] && is_separate(str[*i], separate) == 0)
    {
      result[j] = str[*i];
      j++;
      (*i)++;
    }
  result[j] = '\0';
  return (result);
}

char			**str_to_wordtab(char *str, char *separate)
{
  char			**tab;
  int			words;
  int			i;

  words = 0;
  i = -1;
  while (str[++i])
    if (i - 1 < 0 || (is_separate(str[i], separate) == 1
		      && is_separate(str[i - 1], separate) == 0))
      words++;
  if (words == 0 || (tab = malloc(sizeof(char *) * (words + 1))) == NULL)
    return (NULL);
  i = 0;
  words = 0;
  while (str[i])
    if (is_separate(str[i], separate) == 0)
      {
	if ((tab[words] = size_word(str, separate, &i)) == NULL)
	  return (NULL);
	words++;
      }
    else
      i++;
  tab[words] = NULL;
  return (tab);
}
