
LIBRARY = libft

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

FILES = ft_isascii ft_isalpha

#Appends to each file
CFILES = $(FILES:%=%.c)
OFILES = $(FILES:%=%.o)

NAME = $(LIBRARY).a

$(NAME):
	$(CC) $(CCFLAGS) -I . -c $(CFILES)
	ar -rc $(NAME) $(OFILES)
	
all: $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

#UNFINISHED

# Info

# NAME 
# "-c" :  makes the compiler not link all the obj files. 
# Instead it will create individual .o files for each compiled file
#
# "-I" :  searches your created libary instead of system libaries
#
# CLEAN
# "rm -f" : Force Removes

#Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re.//
