/*
** MyString.h for String.c in /Users/vicostudio/Documents/Work/WorkInProgress/String.c/inc/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Oct 10 10:18:39 2016 John Doe
** Last update Mon Oct 10 15:03:39 2016 John Doe
*/

#ifndef                 MYSTRING_H_
# define                MYSTRING_H_

# include               <unistd.h>
# include		<stdlib.h>

# define		STRING_ERROR 	0
# define		STRING_SUCCESS 	1
# define		STRING_TERM_FD	1

typedef struct 		s_string
{
  /* Publics Methods */
  void (*Print)		(struct s_string *self, int out_fd);
  int (*AppendChar)	(struct s_string *self, char c);

  /* Privates properties */
  char			*content;

  /* Destructor */
  void (*Destruct)	(struct s_string **self);
} 			t_string;
typedef t_string *	m_string;

/* MyString function */
t_string		*ConstructStringFromStr(char *str);
int 			AppendCharToString(t_string *self, char c);
void 			DestructString(t_string **self);

void			PrintString(t_string *self, int out_fd);



/* Str Utils functions */
void			my_putchar(char c, int fd);
void 			my_putstr(char *str, int fd);
int			my_strlen(char* str);
char			*my_strdup(char *src);

#endif                  /* !MYSTRING_H_ */
