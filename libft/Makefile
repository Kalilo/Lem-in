# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khansman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/15 10:33:49 by khansman          #+#    #+#              #
#    Updated: 2016/05/15 11:13:05 by khansman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c
SRCS += ft_isdigit.c ft_isprint.c ft_itoa.c ft_memalloc.c ft_memccpy.c
SRCS += ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c
SRCS += ft_memset.c ft_putchar_fd.c ft_putchar.c ft_putendl_fd.c
SRCS += ft_putendl.c ft_putnbr_fd.c ft_putnbr.c ft_putstr_fd.c
SRCS += ft_putstr.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c
SRCS += ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c
SRCS += ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c
SRCS += ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c
SRCS += ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c
SRCS += ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c 

OBJS = $(SRCS:.c=.o)

ROOTSRCS = $(SRCS:ft_%=srcs/ft_%)

INCLUDES = libft.h

ROOTINC = $(INCLUDES: =%includes/%.h)

define colourecho
	tput setaf 4
	@echo $1
	tput sgr0
endef

all: $(NAME)

$(NAME):
	@$(call colourecho, "Compiling Libft Objects.")
	@gcc -Wall -Wextra -Werror -c $(SRCS)
	@$(call colourecho, "Assembling '.a' file.")
	@ar rc $(NAME) $(OBJS)
	@$(call colourecho, "Done compiling libft.")

clean:
	@$(call colourecho, "Removing libft object files.")
	@rm -Rf $(OBJS)

fclean: clean
	@$(call colourecho, "Removing '.a' file.")
	@rm -Rf $(NAME)

re: fclean all
