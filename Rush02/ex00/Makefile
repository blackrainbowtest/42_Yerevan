NAME = rush-02
SRC = main.c utils.c core.c utils_file.c print.c process.c split.c
OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = 
# -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
