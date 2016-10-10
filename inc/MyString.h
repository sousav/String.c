/*
** MyString.h for String.c in /Users/vicostudio/Documents/Work/WorkInProgress/String.c/inc/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Oct 10 10:18:39 2016 John Doe
** Last update Mon Oct 10 12:38:59 2016 John Doe
*/

#ifndef                 MYSTRING_H_
# define                MYSTRING_H_

# include               <unistd.h>
# include		<stdlib.h>


typedef struct 		s_string
{
  /* Publics Methods */
  void (*Print)		(struct s_string *self, int out_fd);

  /* Privates properties */
  char			*string_content;

  /* Destructor */
  void (*Destruct)	(struct s_string **self);
} 			m_string;

/* MyString function */
m_string		*ConstructStringFromStr(char *str);
void 			DestructString(m_string **self);

void			PrintString(m_string *self, int out_fd);

#endif                  /* !MYSTRING_H_ */
