# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 14:26:40 by nfukuma           #+#    #+#              #
#    Updated: 2022/08/24 14:34:46 by nfukuma          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCDIR = ./
SRCNAMES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
					ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
					ft_memcmp.c ft_memmove.c ft_memcpy.c ft_memset.c ft_putchar_fd.c \
					ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
					ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
					ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
					ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_ultoa.c ft_ultoa_base.c ft_pow.c \
					ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
					ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
					ft_lstmap.c

SRCS = $(addprefix $(SRCDIR), $(SRCNAMES))


CFLAGS = -Wall -Wextra -Werror
CC = gcc

OBJDIR = ./obj/
OBJS = $(SRCNAMES:%.c=$(OBJDIR)%.o)

all : $(OBJDIR) $(NAME)

$(OBJDIR) :
	mkdir -p obj

$(OBJDIR)%.o : $(SRCDIR)%.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME):	$(OBJS)
		ar rcs $@ $^

clean :
	rm -f $(OBJS)

fclean : clean
	rm -rf obj
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re


# SRCS			=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
# 					ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
# 					ft_memcmp.c ft_memmove.c ft_memcpy.c ft_memset.c ft_putchar_fd.c \
# 					ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
# 					ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
# 					ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
# 					ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_ultoa.c ft_ultoa_base.c ft_pow.c \
# 					ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
# 					ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
# 					ft_lstmap.c
#
# OBJS			=	$(SRCS:.c=.o)
#
# BONUS_OBJS		=	$(BONUS:.c=.o)
#
# ifdef			WITH_BONUS
# OBJS			+=	$(BONUS_OBJS)
# endif
#
# CC				= gcc
# CPPFLAGS		+= -Wall -Wextra -Werror
# RM				=	rm -f
#
# NAME			=	libft.a
#
# all:			$(NAME)
#
# $(NAME):		$(OBJS)
# 				ar rcs $@ $^
#
# bonus:
# 				make WITH_BONUS=1
#
# clean:
# 				$(RM) $(OBJS) $(BONUS_OBJS)
#
# fclean:			clean
# 				$(RM) $(NAME)
#
# re:				fclean $(NAME)
#
# .PHONY:			all clean fclean re bonus
