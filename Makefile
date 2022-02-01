LIBRARY = libft

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

FILES = ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_strlen \
		ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memmove \
		ft_strlcpy \
		ft_strlcat \
		ft_toupper \
		ft_tolower \
		ft_strchr \
		ft_strrchr \
		ft_strncmp \
		ft_memchr \
		ft_memcmp \
		ft_strnstr \
		ft_atoi \
		ft_calloc \
		ft_strdup \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_striteri \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \

FILES_BONUS = ft_lstnew \
		ft_lstadd_front \
		ft_lstsize \
		ft_lstlast \
		ft_lstadd_back \
		ft_lstdelone \
		ft_lstclear \
		ft_lstiter \

#Appends to each file
CFILES = $(FILES:%=%.c)
OFILES = $(FILES:%=%.o)

CFILES_BONUS = $(FILES_BONUS:%=%.c)
OFILES_BONUS = $(FILES_BONUS:%=%.o)

NAME = $(LIBRARY).a

$(NAME):
	$(CC) $(CCFLAGS) -I . -c $(CFILES)
	ar -rc $(NAME) $(OFILES)

bonus:
	$(CC) $(CCFLAGS) -I . -c $(CFILES) $(CFILES_BONUS)
	ar -rc $(NAME) $(OFILES) $(OFILES_BONUS)

all: $(NAME)

clean:
	rm -f $(OFILES) $(OFILES_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

### Info ###

# NAME 
# "-c" :  makes the compiler not link all the obj files. 
# Instead it will create individual .o files for each compiled file
#
# "-I" :  searches your created libary instead of system libaries
#
# CLEAN
# "rm -f" : Force Removes
