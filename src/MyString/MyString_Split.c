/*
** MyString_Split.c for String.c in /Users/vicostudio/Documents/Shared Folder/Work/WorkInProgress/String.c/src/MyString/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Tue Oct 11 10:22:53 2016 John Doe
** Last update Tue Oct 11 10:55:53 2016 John Doe
*/

#include		"MyString.h"

static t_string		**formStringTabWithCharArray(char **tab)
{
  int			tabLenght;
  t_string		**out_tab;

  tabLenght = 0;
  while (tab[tabLenght])
    tabLenght++;
  out_tab = malloc(sizeof(t_string *) * (tabLenght + 1));
  if (out_tab == NULL)
    return (STRING_ERROR);
  tabLenght = 0;
  while (tab[tabLenght])
    {
      if ((out_tab[tabLenght] = ConstructStringFromStr(tab[tabLenght])) == NULL)
	return (STRING_ERROR);
      tabLenght++;
    }
  out_tab[tabLenght] = NULL;
  tabLenght = 0;
  while (tab[tabLenght])
    free(tab[tabLenght++]);
  free(tab);
  return (out_tab);
}

t_string		**StringSplitWithChar(t_string *self, char delim)
{
  char			**tab;
  char			*delim_array;

  delim_array = malloc(sizeof(char) * 2);
  delim_array[0] = delim;
  delim_array[1] = '\0';
  tab = str_to_wordtab(self->content, delim_array);
  free(delim_array);
  return (formStringTabWithCharArray(tab));
}

t_string		**StringSplitWithCharArray(t_string *self, char *delim)
{
  char			**tab;

  tab = str_to_wordtab(self->content, delim);
  return (formStringTabWithCharArray(tab));
}

t_string		**StringSplitWithString(t_string *self, t_string *delim)
{
  char			**tab;

  tab = str_to_wordtab(self->content, delim->content);
  return (formStringTabWithCharArray(tab));
}
