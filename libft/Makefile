#### VARIABLES ####
NAME = libft.a
BONUS = bonus
# HEADER_PATH = include
CC= cc
# CFLAGS=-Wall -Wextra -Werror -I $(HEADER0_PATH)
CFLAGS=-Wall -Wextra -Werror
# OBJ=ft_*.c =.o
# SRCS = $(HEADER_PATH)ft_atoi
#### SOURCE ####
SRC_BONUS = ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c

SRC_FILES = ft_atoi.c \
		ft_strnstr.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strrchr.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strchr.c \
		ft_strncmp.c \
		ft_split.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putnbr_fd.c \
		ft_putendl_fd.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_super_strjoin.c\
		ft_strjoin3.c\
		ft_free_tab.c \
		ft_putstr_fd.c

OBJ_FILES = $(SRC_FILES:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)
# OBJ_FILES = $(addsuffix .o, $(SRC_FILES))
#### RULES ####
all: ${NAME}


${NAME} : ${OBJ_FILES}
	ar rcs ${NAME} ${OBJ_FILES}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean  all

bonus: ${NAME} ${OBJ_BONUS}
	ar rcs ${NAME} ${OBJ_BONUS}

.PHONY: all clean fclean re bonus
