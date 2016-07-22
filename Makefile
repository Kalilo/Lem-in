# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehansman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/10 12:36:11 by ehansman          #+#    #+#              #
#    Updated: 2016/07/22 13:19:18 by khansman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lem-in

CC = gcc

CFLAGS = -Wall -Wextra -Werror -pedantic -g

SRC_PATH = ./SRCS/

INCL = includes/lem-in.h

LIB_INCL = -L. libft/libft.h

LIB_A = -lm libft/libft.a

SRC =	$(SRC_PATH)debug.c			\
		$(SRC_PATH)find_path.c		\
		$(SRC_PATH)lem-in.c			\
		$(SRC_PATH)link_add.c		\
		$(SRC_PATH)link_count.c		\
		$(SRC_PATH)link_del.c		\
		$(SRC_PATH)link_scan.c		\
		$(SRC_PATH)print_strings.c	\

BIN =  $(SRC:.c=.o)

define colorecho
      @tput setaf 14
      @echo $1
      @tput sgr0
endef

define colorecho2
      @tput setaf 2
      @echo $1
      @tput sgr0
endef

all: $(NAME)

$(NAME): qme
	@$(call colorecho,"\nPreparing to compile Lem-in...")
	@make re -C libft/
	@$(CC) $(C_FLAGS) -c $(SRC) $(INCL)
	@mv *.o src/
	@$(call colorecho,"Library has successfully compiled and object" \
		"files have been created and moved to src/")
	@$(CC) $(C_FLAGS) $(BIN) $(LIB_INCL) $(LIB_A)
	@mv ./a.out ./lem-in
	@clear
	@$(call colorecho, "Lem-in has successfully been compiled.\n")

clean:
	@rm -f $(BIN)
	@$(call colorecho, "All object files have been removed. Please" \
		"ensure no sourcefiles have accidently been removed.")
	@make clean -C libft/

fclean: clean
	@rm -f $(NAME)
	@make fclean -C libft/
	@$(call colorecho, "The executables ./Lem-in and " \
		"./libft has been removed")
	@rm -f $(INCL:.h=.h.gch)

re: fclean all
	@clear
	@$(call colorecho, "Lem-in has successfully recompiled.\n")

format: norme me
	@$(call colorecho2, "All good!")

norme:
	@$(call colorecho2, "Normenette:\n")
	@norminette $(SRC) $(INCL)

me: qme
	@$(call colorecho2, "Author:")
	cat -e author

qme:
	@rm -Rf author
	@whoami > author
