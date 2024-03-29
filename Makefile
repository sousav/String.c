##
## Makefile for Raytracer in /home/lefevr_h/Repository/Epitech/Year_1/Infographie/gfx_raytracer1
##
## Made by Philippe Lefevre
## Login   <lefevr_h@epitech.net>
##

NAME		=	string_test

ECHO		=	echo
DEFAULT		=	"\x1b[36;1m"
GREEN		=	"\x1b[32;1m"
TEAL		=	"\x1b[36;1m"
RED		=	"\x1b[31;1m"

SRCDIR		=	src
STRDIR		=	$(SRCDIR)/MyString
INCDIR		=	inc
LIBDIR		=	lib

RM		=	rm -f

CC		=	gcc
CFLAGS		=	-W -Wall -Wextra -g -g3 -ggdb		\
			-pedantic				\
			-I$(INCDIR)

LDFLAGS		=

SRC		=	$(SRCDIR)/main.c

SRC		+=	$(STRDIR)/MyString_Constructor.c	\
			$(STRDIR)/MyString_Destructor.c		\
			$(STRDIR)/MyString_Lenght.c		\
			$(STRDIR)/MyString_AppendChar.c		\
			$(STRDIR)/MyString_AppendCharArray.c	\
			$(STRDIR)/MyString_AppendString.c	\
			$(STRDIR)/MyString_ToUpperCase.c	\
			$(STRDIR)/MyString_ToLowerCase.c	\
			$(STRDIR)/MyString_Contains.c		\
			$(STRDIR)/MyString_CharAtIndex.c	\
			$(STRDIR)/MyString_StringCutWithIndex.c	\
			$(STRDIR)/MyString_Split.c		\
			$(STRDIR)/MyString_ToAnyType.c		\
			$(STRDIR)/MyString_Print.c

SRC		+=	$(STRDIR)/MyString_StrWordTab.c		\
			$(STRDIR)/MyString_StrUtils_1.c

OBJ		=	$(SRC:.c=.o)

all		:	title $(NAME)

title		:
			@$(ECHO) $(GREEN) "LIB" $(TEAL) "String"

$(NAME)		:	$(OBJ)
			@$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS) &&	\
			$(ECHO) $(GREEN) "[OK]" $(TEAL) $(NAME) $(DEFAULT) ||	\
			$(ECHO) $(RED) "[XX]" $(TEAL) $(NAME) $(DEFAULT)

.c.o		:
			@$(CC) $(CFLAGS) $(LDFLAGS) -c $< -o $@ &&		\
			$(ECHO) $(GREEN) "[OK]" $(TEAL) $< $(DEFAULT) ||	\
			$(ECHO) $(RED) "[XX]" $(TEAL) $< $(DEFAULT)

clean		:
			@$(RM) $(OBJ)

fclean		:	clean
			@$(RM) $(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re
