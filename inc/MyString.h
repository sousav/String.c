/*
** MyString.h for String.c in /Users/vicostudio/Documents/Work/WorkInProgress/String.c/inc/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Mon Oct 10 10:18:39 2016 John Doe
** Last update Tue Oct 11 11:25:56 2016 John Doe
*/

#ifndef                 		MYSTRING_H_
# define                		MYSTRING_H_

# include               		<unistd.h>
# include				<stdlib.h>

# define				STRING_ERROR 	0
# define				STRING_SUCCESS 	1
# define				STRING_TERM_FD	1

typedef struct 				s_string
{
  /* Publics Methods */
  void (*Print)				(struct s_string *self, int out_fd);

  char *(*ToCharArray) (struct s_string *self);

  int (*Lenght)				(struct s_string *self);

  int (*AppendChar)			(struct s_string *self, char c);
  int (*AppendCharArray)		(struct s_string *self, char *toAdd);
  int (*AppendString)			(struct s_string *self,	 struct s_string *toAdd);

  void (*ToUpperCase)			(struct s_string *self);
  void (*ToLowerCase)			(struct s_string *self);

  int (*ContainsChar)			(struct s_string *self, char c);
  int (*ContainsCharArray)		(struct s_string *self, char *str);
  int (*ContainsString)			(struct s_string *self, struct s_string *string);

  char (*CharAtIndex)			(struct s_string *self, int index);

  struct s_string *(*StringAfterIndex)	(struct s_string *self, int index);
  struct s_string *(*StringBeforeIndex)	(struct s_string *self, int index);
  struct s_string *(*StringBetweenIndex)(struct s_string *self, int indexStart, int indexEnd);

  struct s_string **(*SplitWithChar)	(struct s_string *self, char delim);
  struct s_string **(*SplitWithCharArray)(struct s_string *self, char *delim);
  struct s_string **(*SplitWithString)	(struct s_string *self, struct s_string *delim);

  /* Privates properties */
  char					*content;

  /* Destructor */
  void (*Destruct)			(struct s_string **self);
} 					t_string;
typedef t_string *			String;

/* MyString function */
t_string				*ConstructStringFromStr(char *str);

void					PrintString(t_string *self, int out_fd);

char *StringToCharArray(t_string *self);

int					StringLenght(t_string *self);

int 					AppendCharToString(t_string *self, char c);
int 					AppendCharArrayToString(struct s_string *self, char *toAdd);
int 					AppendStringToString(struct s_string *self, struct s_string *toAdd);

void					StringToUpperCase(t_string *self);
void					StringToLowerCase(t_string *self);

int 					StringContainsChar(t_string *self, char c);
int 					StringContainsCharArray(t_string *self, char *str);
int 					StringContainsString(t_string *self, t_string *string);

char					CharAtIndexInString(t_string *self, int index);

t_string				*StringAfterIndexInString(t_string *self, int index);
t_string				*StringBeforeIndexInString(t_string *self, int index);
t_string				*StringBetweenIndexInString(t_string *self, int indexStart, int indexEnd);

t_string				**StringSplitWithChar(t_string *self, char delim);
t_string				**StringSplitWithCharArray(t_string *self, char *delim);
t_string				**StringSplitWithString(t_string *self, t_string *delim);

void 					DestructString(t_string **self);


/* Str Utils functions */
void					my_putchar(char c, int fd);
void 					my_putstr(char *str, int fd);
int					my_strlen(char* str);
char					*my_strdup(char *src);
int					my_strstr(char *str, char *toFind);
char					**str_to_wordtab(char *str, char *separate);

#endif                  		/* !MYSTRING_H_ */
