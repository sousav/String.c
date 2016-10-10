/*
** MyString.h for String.c in /Users/vicostudio/Documents/Work/WorkInProgress/String.c/inc/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Oct 10 10:18:39 2016 John Doe
** Last update Mon Oct 10 17:00:10 2016 John Doe
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
  int (*AppendCharArray)(struct s_string *self, char *toAdd);
  int (*AppendString)	(struct s_string *self, struct s_string *toAdd);

  void (*ToUpperCase)	(struct s_string *self);
  void (*ToLowerCase)	(struct s_string *self);

  int (*ContainsChar)	(struct s_string *self, char c);
  int (*ContainsCharArray)(struct s_string *self, char *str);
  int (*ContainsString)	(struct s_string *self, struct s_string *string);

  /* Privates properties */
  char			*content;

  /* Destructor */
  void (*Destruct)	(struct s_string **self);
} 			t_string;
typedef t_string *	m_string;

/* MyString function */
t_string		*ConstructStringFromStr(char *str);

void			PrintString(t_string *self, int out_fd);

int 			AppendCharToString(t_string *self, char c);
int 			AppendCharArrayToString(struct s_string *self, char *toAdd);
int 			AppendStringToString(struct s_string *self, struct s_string *toAdd);

void			StringToUpperCase(t_string *self);
void			StringToLowerCase(t_string *self);

int 			StringContainsChar(t_string *self, char c);
int 			StringContainsCharArray(t_string *self, char *str);
int 			StringContainsString(t_string *self, t_string *string);

void 			DestructString(t_string **self);



/* Str Utils functions */
void			my_putchar(char c, int fd);
void 			my_putstr(char *str, int fd);
int			my_strlen(char* str);
char			*my_strdup(char *src);
int			my_strstr(char *str, char *toFind);

#endif                  /* !MYSTRING_H_ */
