#### VARIABLES ####
NAME = pipex
LIBFT = ./libft/libft.a
# HEADER_PATH = include
CC= cc
# CFLAGS=-Wall -Wextra -Werror -I $(HEADER0_PATH)
CFLAGS=-Wall -Wextra -Werror
# OBJ=ft_*.c =.o
# SRCS = $(HEADER_PATH)ft_atoi
#### SOURCE ####
SRC_FILES = pipex.c

OBJ_FILES = $(SRC_FILES:.c=.o)
# OBJ_FILES = $(addsuffix .o, $(SRC_FILES))
#### RULES ####
all: ${NAME}


${NAME} : ${LIBFT} ${OBJ_FILES} 
	${CC} ${CFLAGS} -o ${NAME} ${OBJ_FILES} ${LIBFT} -g3

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@ -g3
${LIBFT} :
	$(MAKE) -C ./libft
clean:
	rm -f ${OBJ_FILES}
	$(MAKE) -C ./libft clean

fclean: clean
	rm -f ${NAME}
	$(MAKE) -C ./libft fclean

re: fclean  all

.PHONY: all clean fclean re 
