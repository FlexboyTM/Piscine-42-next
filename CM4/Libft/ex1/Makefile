# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ropham <ropham@learner.42.tech>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/18 17:11:53 by ropham            #+#    #+#              #
#    Updated: 2026/02/19 19:30:58 by ropham           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a


# compilation avec les flags
CC = cc
CFLAGS = -Wall -Wextra -Werror


# on definit les dossires sources et headers
SDIR = srcs
HDIR = includes

SFILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c


# on transforme les .c en .o dans src
OBJS = $(SFILES:%.c=$(SDIR)/%.o)


# main.c à la racine et inclus dans la lib
MAIN = main.c
MAIN_OBJ = main.o

# le makefile va chercher ses fichiers headers dans le dossier includes
HEADERS = $(HDIR)/ft.h


all: $(NAME)

# compilation des .c dans srcs vers des .o dans srcs
# $< = le .c | $@ = le .o
# -I $(HDIR) = ajoute includes au chemin des headers

$(SDIR)/%.o: $(SDIR)/%.c $(HEADERS)
	$(CC) $(CFLAGS) -I $(HDIR) -c $< -o $@

# Un fichier main.c à la racine devra également être compilé avec les mêmes flags.
$(MAIN_OBJ): $(MAIN) $(HEADERS)
	$(CC) $(CFLAGS) -I $(HDIR) -c $< -o $@


# on construit la bibliothèque statique libft.a et on met tous les .o et le main.o
$(NAME): $(OBJS) $(MAIN_OBJ)
	ar rcs $(NAME) $(OBJS) $(MAIN_OBJ)


# supprime les fichiers temporaires générés, les objects
clean:
	rm -f $(OBJS) $(MAIN_OBJ)

# supprime les temporaires et la bibliothèque
fclean: clean
	rm -f $(NAME)

# rebuild
re: fclean 
	all


# exclus ces commandes des fichiers classique
.PHONY: all clean fclean re
